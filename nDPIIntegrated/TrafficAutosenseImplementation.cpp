#include "TrafficAutosenseImplementation.h"

//main processing function, calls machine exec funtions
/*
bool CTrafficAutosenseManager_Ragel2::SenseProtocol
(
	CTcpSessionAutosenseData &as,
	size_t nLastPacketFrom,
	IDL_L7_PROTOCOL_NAME &eProtoName,
	IDL_L7_PROTOCOL_ROLE &eRole0,
	IDL_L7_PROTOCOL_ROLE &eRole1
)
{
	std::cout<<"***************Compiled Correctly*****"<<std::endl;
	return true;
}
*/

bool CTrafficAutosenseManager_Ragel2::SenseProtocol
(
	struct ndpi_flow_struct *flow,
	CTcpSessionAutosenseData &as,
	size_t nLastPacketFrom,
	IDL_L7_PROTOCOL_NAME &eProtoName,
	IDL_L7_PROTOCOL_ROLE &eRole0,
	IDL_L7_PROTOCOL_ROLE &eRole1
)
{

	//first packet initialize machines
	if(!(as.m_machines.machineInitialized))
	{
		for (size_t party = 0; party < 2; ++party)
		{
			for (size_t i = 0; i < AUTOSENSEMANAGER_IMPL_RAGEL2_NUM_GROUPS; ++i)
			{
				AutoSenseStateController *pfsm = &(as.m_machines.fsm[party][i]);
				AutosenseImplementation_Ragel2Helper::group_init_n(i, pfsm);
			}
		}
		as.m_machines.machineInitialized = true;
	}


	//process packet through all machines
	const unsigned char *p = (unsigned char*)flow->packet.payload;

	size_t dataSize = (size_t)flow->packet.payload_packet_len;
	const unsigned char *pe = p + dataSize;

	for (size_t i = 0; i < AUTOSENSEMANAGER_IMPL_RAGEL2_NUM_GROUPS; ++i)
	{
		AutoSenseStateController *pfsm = &(as.m_machines.fsm[nLastPacketFrom][i]);
		if (pfsm->finished)
		{
			continue;
		}

		int status = AutosenseImplementation_Ragel2Helper::group_exec_n(i,pfsm, const_cast<unsigned char *> (p), const_cast<unsigned char *> (pe),as,nLastPacketFrom);
		if (status == -1 || status == 1)
		{
			pfsm->finished = true;
		}
	}

	for (size_t j = 0; j < AUTOSENSEMANAGER_IMPL_RAGEL2_NUM_PROTOS; ++j)
	{
		if (as.m_machines.protos[j])
		{
			eProtoName = AutosenseImplementation_Ragel2Helper::GetL7ProtocolName(j);
			//cout<<"Protocol Detected with ID: "<<eProtoName<<endl;
			break;
		}
	}

	bool roleAssigned = false;
	for (size_t party = 0; party < 2; ++party)
	{
		for (size_t j = 0; j < AUTOSENSEMANAGER_IMPL_RAGEL2_NUM_ROLES; ++j)
		{
			if (as.m_machines.roles[party][j])
			{
				if (party == 0)
				{
					eRole0 = AutosenseImplementation_Ragel2Helper::GetL7ProtocoRole(j);
				}
				else
				{
					eRole1 = AutosenseImplementation_Ragel2Helper::GetL7ProtocoRole(j);
				}
				roleAssigned = true;
			}
		}
	}

	if (roleAssigned)
	{
		//cout<<"Session: "<<(void *)pSession<<endl;
		return false;
	}

	size_t rejected_machines = 0;

	for(size_t party = 0; party < 2; ++party)
	{
		for (size_t i = 0; i < AUTOSENSEMANAGER_IMPL_RAGEL2_NUM_GROUPS; ++i)
		{
			AutoSenseStateController *pfsm = &(as.m_machines.fsm[party][i]);
			if (pfsm->finished)
			{
				rejected_machines++;
			}
		}
	}

	size_t partyNumber = 2;

	if (rejected_machines == partyNumber * AUTOSENSEMANAGER_IMPL_RAGEL2_NUM_GROUPS)
	{
		eProtoName = IDL_L7_PNAME_ANY;
		eRole0 = IDL_L7_PROLE_ANY;
		eRole1 = IDL_L7_PROLE_ANY;
		return false;
	}
	else
	{
		eProtoName = IDL_L7_PNAME_ANY;
		eRole0 = IDL_L7_PROLE_ANY;
		eRole1 = IDL_L7_PROLE_ANY;
		return true;
	}
}


