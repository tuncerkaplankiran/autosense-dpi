/*
 * IProtocolSensor.h
 *
 *  Created on: Feb 26, 2014
 *      Author: tuncer
 */
#pragma once

#include "AutosenseImplementation_Ragel2Helper.h"




class IProtocolSensor;


enum AS_STATUS
{
	AS_STATE_INITIAL = 0,
	AS_STATE_INPROGRESS,
	AS_STATE_SUCCESS,
	AS_STATE_FAIL,
	AS_STATE_SERVED,
	AS_STATE_CANCELED,
};


class CTcpSessionAutosenseData
{
public:

	enum
	{
		E_MAX_CACHED_TCP_EVENTS	= 16,
	};

public:
	struct RagelMachine
	{
		RagelMachine()
		{
			::ZeroMemory(this, sizeof(*this));
		}

		AutosenseImplementation_Ragel2Helper::s_fsm fsm[2][AUTOSENSEMANAGER_IMPL_RAGEL2_NUM_GROUPS];
		bool roles[2][AUTOSENSEMANAGER_IMPL_RAGEL2_NUM_ROLES];
		bool protos[AUTOSENSEMANAGER_IMPL_RAGEL2_NUM_PROTOS];
		bool machineInitialized;

	};

public:

	CTcpSessionAutosenseData()
	: m_eStatus(AS_STATE_INITIAL),
	  m_pRagel2(0)
	{
	}

	~CTcpSessionAutosenseData()
	{
	}

	AS_STATUS m_eStatus;

	struct RagelMachine					m_machines;
	IProtocolSensor*					m_pRagel2;

};


class IProtocolSensor {

public:
	enum
		{
			E_PORT_COUNT = 65536,
		};


public:

		// Decides the communication protocol for the whole session,
		// and roles of the parties within the session
		//
		// eProto           |  return value   | Description
		// -----------------+-----------------+---------------
		// IDL_L7_PNAME_ANY |  true           | Protocol not recognized *yet*. More packets might yield success
		// IDL_L7_PNAME_ANY |  false          | Protocol is not recognized, there is no hope
		// IDL_L7_PNAME_XXX |  true/false *   | Protocol is recognized as IDL_L7_PNAME_XXX. Retval is not used
		//
		// * If ret==false, all internal states are exhausted
		// * If ret==true, all internal states are not exhausted yet.
		// * This is not utilized yet, but it might later be used for "multi-protocol recognition", to see when a
		//   stream matches multiple protocols. Ideally, autosensing is completed *only when* all internal possibilities
		//   are eliminated.

	virtual bool SenseProtocol
		(
			struct ndpi_flow_struct *flow,
			CTcpSessionAutosenseData &as,
			size_t nLastPacketFrom,
			IDL_L7_PROTOCOL_NAME &eProtoName,
			IDL_L7_PROTOCOL_ROLE &eRole0,
			IDL_L7_PROTOCOL_ROLE &eRole1
		) = 0;

};

