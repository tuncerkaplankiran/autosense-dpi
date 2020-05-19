#pragma once


//#include "IProtocolSensor.h"
#include "ndpi_api.h"

class CTrafficAutosenseManager_Ragel2 : public IProtocolSensor
{
public:
	CTrafficAutosenseManager_Ragel2(){}

	virtual ~CTrafficAutosenseManager_Ragel2() {}

public:

	virtual bool SenseProtocol
	(
		CTcpSessionAutosenseData &as,
		size_t nLastPacketFrom,
		IDL_L7_PROTOCOL_NAME &eProto0,
		IDL_L7_PROTOCOL_NAME &eProto1
	)
	{
		eProto0 = IDL_L7_PNAME_ANY;
		return false;
	}

	virtual bool SenseProtocol
	(
		struct ndpi_flow_struct *flow,
		CTcpSessionAutosenseData &as,
		size_t nLastPacketFrom,
		IDL_L7_PROTOCOL_NAME &eProtoName,
		IDL_L7_PROTOCOL_ROLE &eRole0,
		IDL_L7_PROTOCOL_ROLE &eRole1
	) override;
};

typedef AutosenseImplementation_Ragel2Helper::s_fsm AutoSenseStateController;

