#pragma once

#include "shouldpreCompile_common.h"

typedef
enum IDL_L7_PROTOCOL_NAME
    {
    	IDL_L7_PNAME_ANY = 0,
    	IDL_L7_PNAME_FTP,			//		= 21,
    	IDL_L7_PNAME_SMTP,			//		= 25,
    	IDL_L7_PNAME_HTTP,			//		= 80,
    	IDL_L7_PNAME_POP3,			//		= 110,
    	IDL_L7_PNAME_NNTP,			//		= 119,
    	IDL_L7_PNAME_IMAP4,			//		= 143,
    	IDL_L7_PNAME_YMSG,			//
    	IDL_L7_PNAME_XMPP,			//
    	IDL_L7_PNAME_SIP,
        IDL_L7_PNAME_WTP,
        IDL_L7_PNAME_IRC,
        IDL_L7_PNAME_SSL,
        IDL_L7_PNAME_NETBIOS,	 //13
        IDL_L7_PNAME_DNS,


		IDL_L7_PNAME_TCP_DUMP,
		IDL_L7_PNAME_UDP_DUMP,
		IDL_L7_PNAME_RTP_DUMP,
		IDL_L7_PNAME_H323,
		IDL_L7_PNAME_H323B,
		IDL_L7_PNAME_MMS,
		IDL_L7_PNAME_MSN,
		IDL_L7_PNAME_ICQ,
		IDL_L7_PNAME_TELNET,
		IDL_L7_PNAME_SLIRTP,
		IDL_L7_PNAME_BLACKBERRY,
		IDL_L7_PNAME_WHATSAPP,
		IDL_L7_PNAME_DDFP,

    	IDL_L7_PNAME_SINK0,
    	IDL_L7_PNAME_SINK1,
    	IDL_L7_PNAME_SINK2,
    	IDL_L7_PNAME_SINK3,
    	IDL_L7_PNAME_SINK4,
    	IDL_L7_PNAME_SINK5,
    	IDL_L7_PNAME_SINK6,
    	IDL_L7_PNAME_SINK7,
    	IDL_L7_PNAME_SINK8,
    	IDL_L7_PNAME_SINK9,

    	// Secondary traffic related with a primary protocol
    	IDL_L7_PNAME_FTP_2ND_XFER = 60000,	//
    	IDL_L7_PNAME_YMSG_2ND_P2P,	//
    	IDL_L7_PNAME_YMSG_2ND_MM,	//
    	IDL_L7_PNAME_YMSG_2ND_FILE,    //
    	IDL_L7_PNAME_YMSG_2ND_ANY,    //
    	IDL_L7_PNAME_XMPP_2ND_FILE,			//
    	IDL_L7_PNAME_XMPP_2ND_ANY,			//
       	IDL_L7_PNAME_SIP_2ND_RTP,	//
       	IDL_L7_PNAME_SIP_2ND_RTCP, //
    	IDL_L7_PNAME_IRC_2ND_FILE,
    	IDL_L7_PNAME_IRC_2ND_P2P,
    } IDL_L7_PROTOCOL_NAME;

    typedef
    enum IDL_L7_PROTOCOL_ROLE
	{
		IDL_L7_PROLE_ANY = 0,
		IDL_L7_PROLE_UNKNOWN = 0,//same as Any

		// !!!! *********** keep clients as odd numbers ************* !!!!
		IDL_L7_PROLE_CLIENT_SERVER_START = 10,

		IDL_L7_PROLE_CLIENT,			// keep clients as odd numbers
		IDL_L7_PROLE_SERVER,

		IDL_L7_PROLE_HTTP_CLIENT ,
		IDL_L7_PROLE_HTTP_SERVER ,
		IDL_L7_PROLE_POP3_CLIENT ,
		IDL_L7_PROLE_POP3_SERVER ,
		IDL_L7_PROLE_SMTP_CLIENT ,
		IDL_L7_PROLE_SMTP_SERVER ,


		IDL_L7_PROLE_CLIENT_SERVER_END = 1000,

	} IDL_L7_PROTOCOL_ROLE;



