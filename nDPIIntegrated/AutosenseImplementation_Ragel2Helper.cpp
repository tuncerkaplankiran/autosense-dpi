
#line 1 "AutosenseImplementation_Ragel2Helper.cpp.rl"
// AutosenseImplementation_Ragel2Helper.cpp.rl.tmpl -> AutosenseImplementation_Ragel2Helper.cpp.rl -> AutosenseImplementation_Ragel2Helper.cpp


// CHEETAH template engine.
// Uses # signs for keywords
// Uses $ signs for variable access
//


#include "AutosenseImplementation_Ragel2Helper.h"
#include "IProtocolSensor.h"

/*
  Detected protocols:
    ---------------------------
	| ID 	| PROTOCOL 	|
    ---------------------------
	| 0 	| XMPP 	|
	| 1 	| NETBIOS 	|
	| 2 	| SMTP 	|
	| 3 	| FTP 	|
	| 4 	| NNTP 	|
	| 5 	| HTTP 	|
	| 6 	| YMSG 	|
	| 7 	| IRC 	|
	| 8 	| TELNET 	|
	| 9 	| SSL 	|
	| 10 	| POP3 	|
	| 11 	| DNS 	|
	| 12 	| IMAP4 	|
	| 13 	| SIP 	|

    ---------------------------

	This enum is accessed only locally
*/
enum E_AS_PROTO {
	AS_PROTO_XMPP = 0,
	AS_PROTO_NETBIOS = 1,
	AS_PROTO_SMTP = 2,
	AS_PROTO_FTP = 3,
	AS_PROTO_NNTP = 4,
	AS_PROTO_HTTP = 5,
	AS_PROTO_YMSG = 6,
	AS_PROTO_IRC = 7,
	AS_PROTO_TELNET = 8,
	AS_PROTO_SSL = 9,
	AS_PROTO_POP3 = 10,
	AS_PROTO_DNS = 11,
	AS_PROTO_IMAP4 = 12,
	AS_PROTO_SIP = 13,
	AS_PROTO_COUNT
};

/*
  Detected roles:
    ---------------------------
	| ID 	| ROLE 		|
    ---------------------------
	| 0 	| UNKNOWN 	|
	| 1 	| SMTP_SERVER 	|
	| 2 	| SMTP_CLIENT 	|
	| 3 	| HTTP_SERVER 	|
	| 4 	| HTTP_CLIENT 	|
	| 5 	| POP3_CLIENT 	|
	| 6 	| POP3_SERVER 	|
    ---------------------------

	This enum is accessed only locally
*/
enum E_AS_ROLE {
	AS_ROLE_UNKNOWN = 0,
	AS_ROLE_SMTP_SERVER = 1,
	AS_ROLE_SMTP_CLIENT = 2,
	AS_ROLE_HTTP_SERVER = 3,
	AS_ROLE_HTTP_CLIENT = 4,
	AS_ROLE_POP3_CLIENT = 5,
	AS_ROLE_POP3_SERVER = 6,

	AS_ROLE_COUNT
};


IDL_L7_PROTOCOL_NAME AutosenseImplementation_Ragel2Helper::GetL7ProtocolName(int nProto)
{
	switch ((E_AS_PROTO)nProto)
	{
		// cases are auto-generated
		case AS_PROTO_XMPP: return IDL_L7_PNAME_XMPP;
		case AS_PROTO_NETBIOS: return IDL_L7_PNAME_NETBIOS;
		case AS_PROTO_SMTP: return IDL_L7_PNAME_SMTP;
		case AS_PROTO_FTP: return IDL_L7_PNAME_FTP;
		case AS_PROTO_NNTP: return IDL_L7_PNAME_NNTP;
		case AS_PROTO_HTTP: return IDL_L7_PNAME_HTTP;
		case AS_PROTO_YMSG: return IDL_L7_PNAME_YMSG;
		case AS_PROTO_IRC: return IDL_L7_PNAME_IRC;
		case AS_PROTO_TELNET: return IDL_L7_PNAME_TELNET;
		case AS_PROTO_SSL: return IDL_L7_PNAME_SSL;
		case AS_PROTO_POP3: return IDL_L7_PNAME_POP3;
		case AS_PROTO_DNS: return IDL_L7_PNAME_DNS;
		case AS_PROTO_IMAP4: return IDL_L7_PNAME_IMAP4;
		case AS_PROTO_SIP: return IDL_L7_PNAME_SIP;


		default:
			// The above list includes all generated protocol names,
			// thus it is impossible for this branch to be taken
			// as long as input is correct
			ASSERT(false);
			return IDL_L7_PNAME_ANY;
	}
}

IDL_L7_PROTOCOL_ROLE AutosenseImplementation_Ragel2Helper::GetL7ProtocoRole(int nRole)
{
	switch ((E_AS_ROLE)nRole)
	{
		// cases are auto-generated
		case AS_ROLE_UNKNOWN: return IDL_L7_PROLE_UNKNOWN;
		case AS_ROLE_SMTP_SERVER: return IDL_L7_PROLE_SMTP_SERVER;
		case AS_ROLE_SMTP_CLIENT: return IDL_L7_PROLE_SMTP_CLIENT;
		case AS_ROLE_HTTP_SERVER: return IDL_L7_PROLE_HTTP_SERVER;
		case AS_ROLE_HTTP_CLIENT: return IDL_L7_PROLE_HTTP_CLIENT;
		case AS_ROLE_POP3_CLIENT: return IDL_L7_PROLE_POP3_CLIENT;
		case AS_ROLE_POP3_SERVER: return IDL_L7_PROLE_POP3_SERVER;


		default:
			// The above list includes all generated protocol names,
			// thus it is impossible for this branch to be taken
			// as long as input is correct
			ASSERT(false);
			return IDL_L7_PROLE_ANY;
	}
}

void AutosenseImplementation_Ragel2Helper::group_init_n(int nGroup, s_fsm *pfsm)
{
	switch(nGroup)
	{
		// cases are auto-generated
		case 1:
			group_init_group1(pfsm);
			return;
		case 0:
			group_init_group0(pfsm);
			return;
		case 3:
			group_init_group3(pfsm);
			return;
		case 2:
			group_init_group2(pfsm);
			return;

		default:
			ASSERT(false);
			return;
	}
}


//---- group1 begins here -------------------------

	
#line 339 "AutosenseImplementation_Ragel2Helper.cpp.rl"


	
#line 172 "AutosenseImplementation_Ragel2Helper.cpp"
static const int group1_start = 1;
static const int group1_first_final = 151;
static const int group1_error = 0;

static const int group1_en_main = 1;


#line 342 "AutosenseImplementation_Ragel2Helper.cpp.rl"

	void AutosenseImplementation_Ragel2Helper::group_init_group1(s_fsm *pfsm)
	{
		// TODO
		
#line 347 "AutosenseImplementation_Ragel2Helper.cpp.rl"
		
#line 188 "AutosenseImplementation_Ragel2Helper.cpp"
	{
	 pfsm->cs = group1_start;
	}

#line 348 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	}

	void AutosenseImplementation_Ragel2Helper::group_exec_group1(s_fsm *pfsm, unsigned char *p,
			unsigned char *pe,CTcpSessionAutosenseData &as,size_t myPartyIdx)
	{
		// TODO
		
#line 355 "AutosenseImplementation_Ragel2Helper.cpp.rl"
		size_t otherPartyIdx=((myPartyIdx+1)%2);
		
#line 204 "AutosenseImplementation_Ragel2Helper.cpp"
	{
	if ( p == pe )
		goto _test_eof;
	switch (  pfsm->cs )
	{
case 1:
	switch( (*p) ) {
		case 13u: goto st7;
		case 22u: goto st24;
		case 32u: goto st7;
		case 42u: goto st26;
		case 50u: goto st39;
		case 53u: goto st41;
		case 60u: goto st44;
		case 69u: goto st84;
		case 71u: goto st88;
		case 72u: goto st100;
		case 78u: goto st103;
		case 80u: goto st125;
		case 85u: goto st128;
		case 101u: goto st84;
		case 104u: goto st150;
		case 110u: goto st103;
		case 117u: goto st128;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st7;
	goto st2;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	goto st3;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
	}
	goto st0;
st0:
 pfsm->cs = 0;
	goto _out;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	switch( (*p) ) {
		case 2u: goto st5;
		case 3u: goto st6;
	}
	goto st0;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	if ( (*p) == 0u )
		goto tr19;
	goto st0;
tr19:
#line 267 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_SSL] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st151;
tr36:
#line 191 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_XMPP] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st151;
tr46:
#line 330 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_IMAP4] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st151;
tr111:
#line 290 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_HTTP] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_HTTP_CLIENT] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_HTTP_SERVER] = true; }
	goto st151;
st151:
	if ( ++p == pe )
		goto _test_eof151;
case 151:
#line 286 "AutosenseImplementation_Ragel2Helper.cpp"
	goto st151;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	if ( (*p) <= 1u )
		goto tr19;
	goto st0;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	switch( (*p) ) {
		case 13u: goto st8;
		case 32u: goto st8;
		case 60u: goto st23;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st8;
	goto st3;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 13u: goto st9;
		case 32u: goto st9;
		case 60u: goto st10;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st9;
	goto st0;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	switch( (*p) ) {
		case 13u: goto st9;
		case 32u: goto st9;
		case 60u: goto st10;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st9;
	goto st0;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
	if ( (*p) == 115u )
		goto st11;
	goto st0;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	if ( (*p) == 116u )
		goto st12;
	goto st0;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	if ( (*p) == 114u )
		goto st13;
	goto st0;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	if ( (*p) == 101u )
		goto st14;
	goto st0;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	if ( (*p) == 97u )
		goto st15;
	goto st0;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
	if ( (*p) == 109u )
		goto st16;
	goto st0;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
	if ( (*p) == 58u )
		goto st17;
	goto st0;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	if ( (*p) == 115u )
		goto st18;
	goto st0;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	if ( (*p) == 116u )
		goto st19;
	goto st0;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
	if ( (*p) == 114u )
		goto st20;
	goto st0;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
	if ( (*p) == 101u )
		goto st21;
	goto st0;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
	if ( (*p) == 97u )
		goto st22;
	goto st0;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
	if ( (*p) == 109u )
		goto tr36;
	goto st0;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 115u: goto st11;
	}
	goto st0;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	if ( (*p) == 3u )
		goto st25;
	goto st3;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	switch( (*p) ) {
		case 0u: goto tr19;
		case 1u: goto tr38;
		case 4u: goto st4;
	}
	goto st0;
tr38:
#line 267 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_SSL] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st152;
st152:
	if ( ++p == pe )
		goto _test_eof152;
case 152:
#line 459 "AutosenseImplementation_Ragel2Helper.cpp"
	switch( (*p) ) {
		case 2u: goto st153;
		case 3u: goto st154;
	}
	goto st151;
st153:
	if ( ++p == pe )
		goto _test_eof153;
case 153:
	if ( (*p) == 0u )
		goto tr19;
	goto st151;
st154:
	if ( ++p == pe )
		goto _test_eof154;
case 154:
	if ( (*p) <= 1u )
		goto tr19;
	goto st151;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	if ( (*p) == 32u )
		goto st27;
	goto st3;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 66u: goto st28;
		case 79u: goto st32;
		case 80u: goto st33;
		case 98u: goto st28;
		case 111u: goto st32;
		case 112u: goto st33;
	}
	goto st0;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
	switch( (*p) ) {
		case 89u: goto st29;
		case 121u: goto st29;
	}
	goto st0;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	switch( (*p) ) {
		case 69u: goto st30;
		case 101u: goto st30;
	}
	goto st0;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	switch( (*p) ) {
		case 0u: goto st0;
		case 10u: goto st0;
		case 13u: goto st31;
	}
	goto st30;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	if ( (*p) == 10u )
		goto tr46;
	goto st0;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	switch( (*p) ) {
		case 75u: goto st30;
		case 107u: goto st30;
	}
	goto st0;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	switch( (*p) ) {
		case 82u: goto st34;
		case 114u: goto st34;
	}
	goto st0;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
	switch( (*p) ) {
		case 69u: goto st35;
		case 101u: goto st35;
	}
	goto st0;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	switch( (*p) ) {
		case 65u: goto st36;
		case 97u: goto st36;
	}
	goto st0;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
	switch( (*p) ) {
		case 85u: goto st37;
		case 117u: goto st37;
	}
	goto st0;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	switch( (*p) ) {
		case 84u: goto st38;
		case 116u: goto st38;
	}
	goto st0;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	switch( (*p) ) {
		case 72u: goto st30;
		case 104u: goto st30;
	}
	goto st0;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	if ( (*p) == 50u )
		goto st40;
	goto st3;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 48u: goto st155;
	}
	goto st0;
st155:
	if ( ++p == pe )
		goto _test_eof155;
case 155:
	goto st0;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	if ( (*p) == 53u )
		goto st42;
	goto st3;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 52u: goto st43;
	}
	goto st0;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
	switch( (*p) ) {
		case 10u: goto tr56;
		case 13u: goto tr56;
	}
	goto st43;
tr56:
#line 209 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_SMTP] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_SMTP_SERVER] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_SMTP_CLIENT] = true; }
	goto st156;
st156:
	if ( ++p == pe )
		goto _test_eof156;
case 156:
#line 655 "AutosenseImplementation_Ragel2Helper.cpp"
	switch( (*p) ) {
		case 10u: goto tr56;
		case 13u: goto tr56;
	}
	goto st151;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
	switch( (*p) ) {
		case 63u: goto st45;
		case 115u: goto st83;
	}
	goto st3;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 120u: goto st46;
	}
	goto st0;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
	if ( (*p) == 109u )
		goto st47;
	goto st0;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
	if ( (*p) == 108u )
		goto st48;
	goto st0;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
	switch( (*p) ) {
		case 13u: goto st49;
		case 32u: goto st49;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st49;
	goto st0;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
	switch( (*p) ) {
		case 13u: goto st49;
		case 32u: goto st49;
		case 118u: goto st50;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st49;
	goto st0;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
	if ( (*p) == 101u )
		goto st51;
	goto st0;
st51:
	if ( ++p == pe )
		goto _test_eof51;
case 51:
	if ( (*p) == 114u )
		goto st52;
	goto st0;
st52:
	if ( ++p == pe )
		goto _test_eof52;
case 52:
	if ( (*p) == 115u )
		goto st53;
	goto st0;
st53:
	if ( ++p == pe )
		goto _test_eof53;
case 53:
	if ( (*p) == 105u )
		goto st54;
	goto st0;
st54:
	if ( ++p == pe )
		goto _test_eof54;
case 54:
	if ( (*p) == 111u )
		goto st55;
	goto st0;
st55:
	if ( ++p == pe )
		goto _test_eof55;
case 55:
	if ( (*p) == 110u )
		goto st56;
	goto st0;
st56:
	if ( ++p == pe )
		goto _test_eof56;
case 56:
	switch( (*p) ) {
		case 13u: goto st56;
		case 32u: goto st56;
		case 61u: goto st57;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st56;
	goto st0;
st57:
	if ( ++p == pe )
		goto _test_eof57;
case 57:
	switch( (*p) ) {
		case 13u: goto st57;
		case 32u: goto st57;
		case 34u: goto st58;
		case 39u: goto st79;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st57;
	goto st0;
st58:
	if ( ++p == pe )
		goto _test_eof58;
case 58:
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st59;
	goto st0;
st59:
	if ( ++p == pe )
		goto _test_eof59;
case 59:
	if ( (*p) == 46u )
		goto st60;
	goto st0;
st60:
	if ( ++p == pe )
		goto _test_eof60;
case 60:
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st61;
	goto st0;
st61:
	if ( ++p == pe )
		goto _test_eof61;
case 61:
	if ( (*p) == 34u )
		goto st62;
	goto st0;
st62:
	if ( ++p == pe )
		goto _test_eof62;
case 62:
	switch( (*p) ) {
		case 13u: goto st63;
		case 32u: goto st63;
		case 63u: goto st64;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st63;
	goto st0;
st63:
	if ( ++p == pe )
		goto _test_eof63;
case 63:
	switch( (*p) ) {
		case 13u: goto st63;
		case 32u: goto st63;
		case 63u: goto st64;
		case 101u: goto st65;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st63;
	goto st0;
st64:
	if ( ++p == pe )
		goto _test_eof64;
case 64:
	if ( (*p) == 62u )
		goto st9;
	goto st0;
st65:
	if ( ++p == pe )
		goto _test_eof65;
case 65:
	if ( (*p) == 110u )
		goto st66;
	goto st0;
st66:
	if ( ++p == pe )
		goto _test_eof66;
case 66:
	if ( (*p) == 99u )
		goto st67;
	goto st0;
st67:
	if ( ++p == pe )
		goto _test_eof67;
case 67:
	if ( (*p) == 111u )
		goto st68;
	goto st0;
st68:
	if ( ++p == pe )
		goto _test_eof68;
case 68:
	if ( (*p) == 100u )
		goto st69;
	goto st0;
st69:
	if ( ++p == pe )
		goto _test_eof69;
case 69:
	if ( (*p) == 105u )
		goto st70;
	goto st0;
st70:
	if ( ++p == pe )
		goto _test_eof70;
case 70:
	if ( (*p) == 110u )
		goto st71;
	goto st0;
st71:
	if ( ++p == pe )
		goto _test_eof71;
case 71:
	if ( (*p) == 103u )
		goto st72;
	goto st0;
st72:
	if ( ++p == pe )
		goto _test_eof72;
case 72:
	switch( (*p) ) {
		case 13u: goto st72;
		case 32u: goto st72;
		case 61u: goto st73;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st72;
	goto st0;
st73:
	if ( ++p == pe )
		goto _test_eof73;
case 73:
	switch( (*p) ) {
		case 13u: goto st73;
		case 32u: goto st73;
		case 34u: goto st74;
		case 39u: goto st77;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st73;
	goto st0;
st74:
	if ( ++p == pe )
		goto _test_eof74;
case 74:
	if ( (*p) > 90u ) {
		if ( 97u <= (*p) && (*p) <= 122u )
			goto st75;
	} else if ( (*p) >= 65u )
		goto st75;
	goto st0;
st75:
	if ( ++p == pe )
		goto _test_eof75;
case 75:
	switch( (*p) ) {
		case 34u: goto st76;
		case 95u: goto st75;
	}
	if ( (*p) < 48u ) {
		if ( 45u <= (*p) && (*p) <= 46u )
			goto st75;
	} else if ( (*p) > 57u ) {
		if ( (*p) > 90u ) {
			if ( 97u <= (*p) && (*p) <= 122u )
				goto st75;
		} else if ( (*p) >= 65u )
			goto st75;
	} else
		goto st75;
	goto st0;
st76:
	if ( ++p == pe )
		goto _test_eof76;
case 76:
	switch( (*p) ) {
		case 13u: goto st76;
		case 32u: goto st76;
		case 63u: goto st64;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st76;
	goto st0;
st77:
	if ( ++p == pe )
		goto _test_eof77;
case 77:
	if ( (*p) > 90u ) {
		if ( 97u <= (*p) && (*p) <= 122u )
			goto st78;
	} else if ( (*p) >= 65u )
		goto st78;
	goto st0;
st78:
	if ( ++p == pe )
		goto _test_eof78;
case 78:
	switch( (*p) ) {
		case 39u: goto st76;
		case 95u: goto st78;
	}
	if ( (*p) < 48u ) {
		if ( 45u <= (*p) && (*p) <= 46u )
			goto st78;
	} else if ( (*p) > 57u ) {
		if ( (*p) > 90u ) {
			if ( 97u <= (*p) && (*p) <= 122u )
				goto st78;
		} else if ( (*p) >= 65u )
			goto st78;
	} else
		goto st78;
	goto st0;
st79:
	if ( ++p == pe )
		goto _test_eof79;
case 79:
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st80;
	goto st0;
st80:
	if ( ++p == pe )
		goto _test_eof80;
case 80:
	if ( (*p) == 46u )
		goto st81;
	goto st0;
st81:
	if ( ++p == pe )
		goto _test_eof81;
case 81:
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st82;
	goto st0;
st82:
	if ( ++p == pe )
		goto _test_eof82;
case 82:
	if ( (*p) == 39u )
		goto st62;
	goto st0;
st83:
	if ( ++p == pe )
		goto _test_eof83;
case 83:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 116u: goto st12;
	}
	goto st0;
st84:
	if ( ++p == pe )
		goto _test_eof84;
case 84:
	switch( (*p) ) {
		case 72u: goto st85;
		case 104u: goto st85;
	}
	goto st3;
st85:
	if ( ++p == pe )
		goto _test_eof85;
case 85:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 76u: goto st86;
		case 108u: goto st86;
	}
	goto st0;
st86:
	if ( ++p == pe )
		goto _test_eof86;
case 86:
	switch( (*p) ) {
		case 79u: goto st87;
		case 111u: goto st87;
	}
	goto st0;
st87:
	if ( ++p == pe )
		goto _test_eof87;
case 87:
	switch( (*p) ) {
		case 10u: goto tr99;
		case 13u: goto tr99;
	}
	goto st87;
tr99:
#line 217 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_SMTP] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_SMTP_CLIENT] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_SMTP_SERVER] = true; }
	goto st157;
st157:
	if ( ++p == pe )
		goto _test_eof157;
case 157:
#line 1074 "AutosenseImplementation_Ragel2Helper.cpp"
	switch( (*p) ) {
		case 10u: goto tr99;
		case 13u: goto tr99;
	}
	goto st151;
st88:
	if ( ++p == pe )
		goto _test_eof88;
case 88:
	if ( (*p) == 69u )
		goto st89;
	goto st3;
st89:
	if ( ++p == pe )
		goto _test_eof89;
case 89:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 84u: goto st90;
	}
	goto st0;
st90:
	if ( ++p == pe )
		goto _test_eof90;
case 90:
	if ( (*p) == 13u )
		goto st0;
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st0;
	goto st91;
st91:
	if ( ++p == pe )
		goto _test_eof91;
case 91:
	switch( (*p) ) {
		case 13u: goto st0;
		case 72u: goto st92;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st0;
	goto st91;
st92:
	if ( ++p == pe )
		goto _test_eof92;
case 92:
	switch( (*p) ) {
		case 13u: goto st0;
		case 72u: goto st92;
		case 84u: goto st93;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st0;
	goto st91;
st93:
	if ( ++p == pe )
		goto _test_eof93;
case 93:
	switch( (*p) ) {
		case 13u: goto st0;
		case 72u: goto st92;
		case 84u: goto st94;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st0;
	goto st91;
st94:
	if ( ++p == pe )
		goto _test_eof94;
case 94:
	switch( (*p) ) {
		case 13u: goto st0;
		case 72u: goto st92;
		case 80u: goto st95;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st0;
	goto st91;
st95:
	if ( ++p == pe )
		goto _test_eof95;
case 95:
	switch( (*p) ) {
		case 13u: goto st0;
		case 47u: goto st96;
		case 72u: goto st92;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st0;
	goto st91;
st96:
	if ( ++p == pe )
		goto _test_eof96;
case 96:
	switch( (*p) ) {
		case 13u: goto st0;
		case 72u: goto st92;
	}
	if ( (*p) > 10u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st97;
	} else if ( (*p) >= 9u )
		goto st0;
	goto st91;
st97:
	if ( ++p == pe )
		goto _test_eof97;
case 97:
	switch( (*p) ) {
		case 13u: goto st0;
		case 46u: goto st98;
		case 72u: goto st92;
	}
	if ( 9u <= (*p) && (*p) <= 10u )
		goto st0;
	goto st91;
st98:
	if ( ++p == pe )
		goto _test_eof98;
case 98:
	switch( (*p) ) {
		case 13u: goto st0;
		case 72u: goto st92;
	}
	if ( (*p) > 10u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st99;
	} else if ( (*p) >= 9u )
		goto st0;
	goto st91;
st99:
	if ( ++p == pe )
		goto _test_eof99;
case 99:
	switch( (*p) ) {
		case 9u: goto st0;
		case 10u: goto tr111;
		case 13u: goto tr111;
		case 72u: goto st92;
	}
	goto st91;
st100:
	if ( ++p == pe )
		goto _test_eof100;
case 100:
	switch( (*p) ) {
		case 69u: goto st101;
		case 101u: goto st85;
	}
	goto st3;
st101:
	if ( ++p == pe )
		goto _test_eof101;
case 101:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 65u: goto st102;
		case 76u: goto st86;
		case 108u: goto st86;
	}
	goto st0;
st102:
	if ( ++p == pe )
		goto _test_eof102;
case 102:
	if ( (*p) == 68u )
		goto st90;
	goto st0;
st103:
	if ( ++p == pe )
		goto _test_eof103;
case 103:
	switch( (*p) ) {
		case 73u: goto st104;
		case 105u: goto st104;
	}
	goto st3;
st104:
	if ( ++p == pe )
		goto _test_eof104;
case 104:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 67u: goto st105;
		case 99u: goto st105;
	}
	goto st0;
st105:
	if ( ++p == pe )
		goto _test_eof105;
case 105:
	switch( (*p) ) {
		case 75u: goto st106;
		case 107u: goto st106;
	}
	goto st0;
st106:
	if ( ++p == pe )
		goto _test_eof106;
case 106:
	if ( (*p) == 32u )
		goto st107;
	goto st0;
st107:
	if ( ++p == pe )
		goto _test_eof107;
case 107:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st107;
	}
	goto st108;
st108:
	if ( ++p == pe )
		goto _test_eof108;
case 108:
	switch( (*p) ) {
		case 10u: goto st109;
		case 13u: goto st109;
		case 32u: goto st122;
	}
	goto st108;
st109:
	if ( ++p == pe )
		goto _test_eof109;
case 109:
	switch( (*p) ) {
		case 10u: goto st109;
		case 13u: goto st109;
		case 85u: goto st110;
		case 117u: goto st110;
	}
	goto st0;
st110:
	if ( ++p == pe )
		goto _test_eof110;
case 110:
	switch( (*p) ) {
		case 83u: goto st111;
		case 115u: goto st111;
	}
	goto st0;
st111:
	if ( ++p == pe )
		goto _test_eof111;
case 111:
	switch( (*p) ) {
		case 69u: goto st112;
		case 101u: goto st112;
	}
	goto st0;
st112:
	if ( ++p == pe )
		goto _test_eof112;
case 112:
	switch( (*p) ) {
		case 82u: goto st113;
		case 114u: goto st113;
	}
	goto st0;
st113:
	if ( ++p == pe )
		goto _test_eof113;
case 113:
	if ( (*p) == 32u )
		goto st114;
	goto st0;
st114:
	if ( ++p == pe )
		goto _test_eof114;
case 114:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st114;
	}
	goto st115;
st115:
	if ( ++p == pe )
		goto _test_eof115;
case 115:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st116;
	}
	goto st115;
st116:
	if ( ++p == pe )
		goto _test_eof116;
case 116:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st116;
	}
	goto st117;
st117:
	if ( ++p == pe )
		goto _test_eof117;
case 117:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st118;
	}
	goto st117;
st118:
	if ( ++p == pe )
		goto _test_eof118;
case 118:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st118;
	}
	goto st119;
st119:
	if ( ++p == pe )
		goto _test_eof119;
case 119:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st120;
	}
	goto st119;
st120:
	if ( ++p == pe )
		goto _test_eof120;
case 120:
	goto st121;
st121:
	if ( ++p == pe )
		goto _test_eof121;
case 121:
	switch( (*p) ) {
		case 10u: goto tr133;
		case 13u: goto tr133;
	}
	goto st121;
tr133:
#line 240 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_IRC] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st158;
st158:
	if ( ++p == pe )
		goto _test_eof158;
case 158:
#line 1427 "AutosenseImplementation_Ragel2Helper.cpp"
	switch( (*p) ) {
		case 10u: goto tr133;
		case 13u: goto tr133;
	}
	goto st158;
st122:
	if ( ++p == pe )
		goto _test_eof122;
case 122:
	switch( (*p) ) {
		case 10u: goto st109;
		case 13u: goto st109;
		case 32u: goto st122;
	}
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st123;
	goto st0;
st123:
	if ( ++p == pe )
		goto _test_eof123;
case 123:
	switch( (*p) ) {
		case 10u: goto st109;
		case 13u: goto st109;
		case 32u: goto st124;
	}
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st123;
	goto st0;
st124:
	if ( ++p == pe )
		goto _test_eof124;
case 124:
	switch( (*p) ) {
		case 10u: goto st109;
		case 13u: goto st109;
		case 32u: goto st124;
	}
	goto st0;
st125:
	if ( ++p == pe )
		goto _test_eof125;
case 125:
	if ( (*p) == 79u )
		goto st126;
	goto st3;
st126:
	if ( ++p == pe )
		goto _test_eof126;
case 126:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 83u: goto st127;
	}
	goto st0;
st127:
	if ( ++p == pe )
		goto _test_eof127;
case 127:
	if ( (*p) == 84u )
		goto st90;
	goto st0;
st128:
	if ( ++p == pe )
		goto _test_eof128;
case 128:
	switch( (*p) ) {
		case 83u: goto st129;
		case 115u: goto st129;
	}
	goto st3;
st129:
	if ( ++p == pe )
		goto _test_eof129;
case 129:
	switch( (*p) ) {
		case 1u: goto st4;
		case 4u: goto st4;
		case 69u: goto st130;
		case 101u: goto st130;
	}
	goto st0;
st130:
	if ( ++p == pe )
		goto _test_eof130;
case 130:
	switch( (*p) ) {
		case 82u: goto st131;
		case 114u: goto st131;
	}
	goto st0;
st131:
	if ( ++p == pe )
		goto _test_eof131;
case 131:
	if ( (*p) == 32u )
		goto st132;
	goto st0;
st132:
	if ( ++p == pe )
		goto _test_eof132;
case 132:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st132;
	}
	goto st133;
st133:
	if ( ++p == pe )
		goto _test_eof133;
case 133:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st134;
	}
	goto st133;
st134:
	if ( ++p == pe )
		goto _test_eof134;
case 134:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st134;
	}
	goto st135;
st135:
	if ( ++p == pe )
		goto _test_eof135;
case 135:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st136;
	}
	goto st135;
st136:
	if ( ++p == pe )
		goto _test_eof136;
case 136:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st136;
	}
	goto st137;
st137:
	if ( ++p == pe )
		goto _test_eof137;
case 137:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st138;
	}
	goto st137;
st138:
	if ( ++p == pe )
		goto _test_eof138;
case 138:
	goto st139;
st139:
	if ( ++p == pe )
		goto _test_eof139;
case 139:
	switch( (*p) ) {
		case 10u: goto st140;
		case 13u: goto st140;
	}
	goto st139;
st140:
	if ( ++p == pe )
		goto _test_eof140;
case 140:
	switch( (*p) ) {
		case 10u: goto st140;
		case 13u: goto st140;
		case 78u: goto st141;
		case 110u: goto st141;
	}
	goto st139;
st141:
	if ( ++p == pe )
		goto _test_eof141;
case 141:
	switch( (*p) ) {
		case 10u: goto st140;
		case 13u: goto st140;
		case 73u: goto st142;
		case 105u: goto st142;
	}
	goto st139;
st142:
	if ( ++p == pe )
		goto _test_eof142;
case 142:
	switch( (*p) ) {
		case 10u: goto st140;
		case 13u: goto st140;
		case 67u: goto st143;
		case 99u: goto st143;
	}
	goto st139;
st143:
	if ( ++p == pe )
		goto _test_eof143;
case 143:
	switch( (*p) ) {
		case 10u: goto st140;
		case 13u: goto st140;
		case 75u: goto st144;
		case 107u: goto st144;
	}
	goto st139;
st144:
	if ( ++p == pe )
		goto _test_eof144;
case 144:
	switch( (*p) ) {
		case 10u: goto st140;
		case 13u: goto st140;
		case 32u: goto st145;
	}
	goto st139;
st145:
	if ( ++p == pe )
		goto _test_eof145;
case 145:
	switch( (*p) ) {
		case 10u: goto st140;
		case 13u: goto st140;
		case 32u: goto st145;
	}
	goto st146;
st146:
	if ( ++p == pe )
		goto _test_eof146;
case 146:
	switch( (*p) ) {
		case 10u: goto tr156;
		case 13u: goto tr156;
		case 32u: goto st147;
	}
	goto st146;
tr156:
#line 240 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_IRC] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st159;
st159:
	if ( ++p == pe )
		goto _test_eof159;
case 159:
#line 1683 "AutosenseImplementation_Ragel2Helper.cpp"
	switch( (*p) ) {
		case 10u: goto tr156;
		case 13u: goto tr156;
		case 78u: goto st162;
		case 110u: goto st162;
	}
	goto st160;
st160:
	if ( ++p == pe )
		goto _test_eof160;
case 160:
	switch( (*p) ) {
		case 10u: goto st161;
		case 13u: goto st161;
	}
	goto st160;
st161:
	if ( ++p == pe )
		goto _test_eof161;
case 161:
	switch( (*p) ) {
		case 10u: goto st161;
		case 13u: goto st161;
		case 78u: goto st162;
		case 110u: goto st162;
	}
	goto st160;
st162:
	if ( ++p == pe )
		goto _test_eof162;
case 162:
	switch( (*p) ) {
		case 10u: goto st161;
		case 13u: goto st161;
		case 73u: goto st163;
		case 105u: goto st163;
	}
	goto st160;
st163:
	if ( ++p == pe )
		goto _test_eof163;
case 163:
	switch( (*p) ) {
		case 10u: goto st161;
		case 13u: goto st161;
		case 67u: goto st164;
		case 99u: goto st164;
	}
	goto st160;
st164:
	if ( ++p == pe )
		goto _test_eof164;
case 164:
	switch( (*p) ) {
		case 10u: goto st161;
		case 13u: goto st161;
		case 75u: goto st165;
		case 107u: goto st165;
	}
	goto st160;
st165:
	if ( ++p == pe )
		goto _test_eof165;
case 165:
	switch( (*p) ) {
		case 10u: goto st161;
		case 13u: goto st161;
		case 32u: goto st166;
	}
	goto st160;
st166:
	if ( ++p == pe )
		goto _test_eof166;
case 166:
	switch( (*p) ) {
		case 10u: goto st161;
		case 13u: goto st161;
		case 32u: goto st166;
	}
	goto st167;
st167:
	if ( ++p == pe )
		goto _test_eof167;
case 167:
	switch( (*p) ) {
		case 10u: goto tr156;
		case 13u: goto tr156;
		case 32u: goto st168;
	}
	goto st167;
st168:
	if ( ++p == pe )
		goto _test_eof168;
case 168:
	switch( (*p) ) {
		case 10u: goto tr156;
		case 13u: goto tr156;
		case 32u: goto st168;
	}
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st169;
	goto st160;
st169:
	if ( ++p == pe )
		goto _test_eof169;
case 169:
	switch( (*p) ) {
		case 10u: goto tr156;
		case 13u: goto tr156;
		case 32u: goto st170;
	}
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st169;
	goto st160;
st170:
	if ( ++p == pe )
		goto _test_eof170;
case 170:
	switch( (*p) ) {
		case 10u: goto tr156;
		case 13u: goto tr156;
		case 32u: goto st170;
	}
	goto st160;
st147:
	if ( ++p == pe )
		goto _test_eof147;
case 147:
	switch( (*p) ) {
		case 10u: goto tr156;
		case 13u: goto tr156;
		case 32u: goto st147;
	}
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st148;
	goto st139;
st148:
	if ( ++p == pe )
		goto _test_eof148;
case 148:
	switch( (*p) ) {
		case 10u: goto tr156;
		case 13u: goto tr156;
		case 32u: goto st149;
	}
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st148;
	goto st139;
st149:
	if ( ++p == pe )
		goto _test_eof149;
case 149:
	switch( (*p) ) {
		case 10u: goto tr156;
		case 13u: goto tr156;
		case 32u: goto st149;
	}
	goto st139;
st150:
	if ( ++p == pe )
		goto _test_eof150;
case 150:
	switch( (*p) ) {
		case 69u: goto st85;
		case 101u: goto st85;
	}
	goto st3;
	}
	_test_eof2:  pfsm->cs = 2; goto _test_eof; 
	_test_eof3:  pfsm->cs = 3; goto _test_eof; 
	_test_eof4:  pfsm->cs = 4; goto _test_eof; 
	_test_eof5:  pfsm->cs = 5; goto _test_eof; 
	_test_eof151:  pfsm->cs = 151; goto _test_eof; 
	_test_eof6:  pfsm->cs = 6; goto _test_eof; 
	_test_eof7:  pfsm->cs = 7; goto _test_eof; 
	_test_eof8:  pfsm->cs = 8; goto _test_eof; 
	_test_eof9:  pfsm->cs = 9; goto _test_eof; 
	_test_eof10:  pfsm->cs = 10; goto _test_eof; 
	_test_eof11:  pfsm->cs = 11; goto _test_eof; 
	_test_eof12:  pfsm->cs = 12; goto _test_eof; 
	_test_eof13:  pfsm->cs = 13; goto _test_eof; 
	_test_eof14:  pfsm->cs = 14; goto _test_eof; 
	_test_eof15:  pfsm->cs = 15; goto _test_eof; 
	_test_eof16:  pfsm->cs = 16; goto _test_eof; 
	_test_eof17:  pfsm->cs = 17; goto _test_eof; 
	_test_eof18:  pfsm->cs = 18; goto _test_eof; 
	_test_eof19:  pfsm->cs = 19; goto _test_eof; 
	_test_eof20:  pfsm->cs = 20; goto _test_eof; 
	_test_eof21:  pfsm->cs = 21; goto _test_eof; 
	_test_eof22:  pfsm->cs = 22; goto _test_eof; 
	_test_eof23:  pfsm->cs = 23; goto _test_eof; 
	_test_eof24:  pfsm->cs = 24; goto _test_eof; 
	_test_eof25:  pfsm->cs = 25; goto _test_eof; 
	_test_eof152:  pfsm->cs = 152; goto _test_eof; 
	_test_eof153:  pfsm->cs = 153; goto _test_eof; 
	_test_eof154:  pfsm->cs = 154; goto _test_eof; 
	_test_eof26:  pfsm->cs = 26; goto _test_eof; 
	_test_eof27:  pfsm->cs = 27; goto _test_eof; 
	_test_eof28:  pfsm->cs = 28; goto _test_eof; 
	_test_eof29:  pfsm->cs = 29; goto _test_eof; 
	_test_eof30:  pfsm->cs = 30; goto _test_eof; 
	_test_eof31:  pfsm->cs = 31; goto _test_eof; 
	_test_eof32:  pfsm->cs = 32; goto _test_eof; 
	_test_eof33:  pfsm->cs = 33; goto _test_eof; 
	_test_eof34:  pfsm->cs = 34; goto _test_eof; 
	_test_eof35:  pfsm->cs = 35; goto _test_eof; 
	_test_eof36:  pfsm->cs = 36; goto _test_eof; 
	_test_eof37:  pfsm->cs = 37; goto _test_eof; 
	_test_eof38:  pfsm->cs = 38; goto _test_eof; 
	_test_eof39:  pfsm->cs = 39; goto _test_eof; 
	_test_eof40:  pfsm->cs = 40; goto _test_eof; 
	_test_eof155:  pfsm->cs = 155; goto _test_eof; 
	_test_eof41:  pfsm->cs = 41; goto _test_eof; 
	_test_eof42:  pfsm->cs = 42; goto _test_eof; 
	_test_eof43:  pfsm->cs = 43; goto _test_eof; 
	_test_eof156:  pfsm->cs = 156; goto _test_eof; 
	_test_eof44:  pfsm->cs = 44; goto _test_eof; 
	_test_eof45:  pfsm->cs = 45; goto _test_eof; 
	_test_eof46:  pfsm->cs = 46; goto _test_eof; 
	_test_eof47:  pfsm->cs = 47; goto _test_eof; 
	_test_eof48:  pfsm->cs = 48; goto _test_eof; 
	_test_eof49:  pfsm->cs = 49; goto _test_eof; 
	_test_eof50:  pfsm->cs = 50; goto _test_eof; 
	_test_eof51:  pfsm->cs = 51; goto _test_eof; 
	_test_eof52:  pfsm->cs = 52; goto _test_eof; 
	_test_eof53:  pfsm->cs = 53; goto _test_eof; 
	_test_eof54:  pfsm->cs = 54; goto _test_eof; 
	_test_eof55:  pfsm->cs = 55; goto _test_eof; 
	_test_eof56:  pfsm->cs = 56; goto _test_eof; 
	_test_eof57:  pfsm->cs = 57; goto _test_eof; 
	_test_eof58:  pfsm->cs = 58; goto _test_eof; 
	_test_eof59:  pfsm->cs = 59; goto _test_eof; 
	_test_eof60:  pfsm->cs = 60; goto _test_eof; 
	_test_eof61:  pfsm->cs = 61; goto _test_eof; 
	_test_eof62:  pfsm->cs = 62; goto _test_eof; 
	_test_eof63:  pfsm->cs = 63; goto _test_eof; 
	_test_eof64:  pfsm->cs = 64; goto _test_eof; 
	_test_eof65:  pfsm->cs = 65; goto _test_eof; 
	_test_eof66:  pfsm->cs = 66; goto _test_eof; 
	_test_eof67:  pfsm->cs = 67; goto _test_eof; 
	_test_eof68:  pfsm->cs = 68; goto _test_eof; 
	_test_eof69:  pfsm->cs = 69; goto _test_eof; 
	_test_eof70:  pfsm->cs = 70; goto _test_eof; 
	_test_eof71:  pfsm->cs = 71; goto _test_eof; 
	_test_eof72:  pfsm->cs = 72; goto _test_eof; 
	_test_eof73:  pfsm->cs = 73; goto _test_eof; 
	_test_eof74:  pfsm->cs = 74; goto _test_eof; 
	_test_eof75:  pfsm->cs = 75; goto _test_eof; 
	_test_eof76:  pfsm->cs = 76; goto _test_eof; 
	_test_eof77:  pfsm->cs = 77; goto _test_eof; 
	_test_eof78:  pfsm->cs = 78; goto _test_eof; 
	_test_eof79:  pfsm->cs = 79; goto _test_eof; 
	_test_eof80:  pfsm->cs = 80; goto _test_eof; 
	_test_eof81:  pfsm->cs = 81; goto _test_eof; 
	_test_eof82:  pfsm->cs = 82; goto _test_eof; 
	_test_eof83:  pfsm->cs = 83; goto _test_eof; 
	_test_eof84:  pfsm->cs = 84; goto _test_eof; 
	_test_eof85:  pfsm->cs = 85; goto _test_eof; 
	_test_eof86:  pfsm->cs = 86; goto _test_eof; 
	_test_eof87:  pfsm->cs = 87; goto _test_eof; 
	_test_eof157:  pfsm->cs = 157; goto _test_eof; 
	_test_eof88:  pfsm->cs = 88; goto _test_eof; 
	_test_eof89:  pfsm->cs = 89; goto _test_eof; 
	_test_eof90:  pfsm->cs = 90; goto _test_eof; 
	_test_eof91:  pfsm->cs = 91; goto _test_eof; 
	_test_eof92:  pfsm->cs = 92; goto _test_eof; 
	_test_eof93:  pfsm->cs = 93; goto _test_eof; 
	_test_eof94:  pfsm->cs = 94; goto _test_eof; 
	_test_eof95:  pfsm->cs = 95; goto _test_eof; 
	_test_eof96:  pfsm->cs = 96; goto _test_eof; 
	_test_eof97:  pfsm->cs = 97; goto _test_eof; 
	_test_eof98:  pfsm->cs = 98; goto _test_eof; 
	_test_eof99:  pfsm->cs = 99; goto _test_eof; 
	_test_eof100:  pfsm->cs = 100; goto _test_eof; 
	_test_eof101:  pfsm->cs = 101; goto _test_eof; 
	_test_eof102:  pfsm->cs = 102; goto _test_eof; 
	_test_eof103:  pfsm->cs = 103; goto _test_eof; 
	_test_eof104:  pfsm->cs = 104; goto _test_eof; 
	_test_eof105:  pfsm->cs = 105; goto _test_eof; 
	_test_eof106:  pfsm->cs = 106; goto _test_eof; 
	_test_eof107:  pfsm->cs = 107; goto _test_eof; 
	_test_eof108:  pfsm->cs = 108; goto _test_eof; 
	_test_eof109:  pfsm->cs = 109; goto _test_eof; 
	_test_eof110:  pfsm->cs = 110; goto _test_eof; 
	_test_eof111:  pfsm->cs = 111; goto _test_eof; 
	_test_eof112:  pfsm->cs = 112; goto _test_eof; 
	_test_eof113:  pfsm->cs = 113; goto _test_eof; 
	_test_eof114:  pfsm->cs = 114; goto _test_eof; 
	_test_eof115:  pfsm->cs = 115; goto _test_eof; 
	_test_eof116:  pfsm->cs = 116; goto _test_eof; 
	_test_eof117:  pfsm->cs = 117; goto _test_eof; 
	_test_eof118:  pfsm->cs = 118; goto _test_eof; 
	_test_eof119:  pfsm->cs = 119; goto _test_eof; 
	_test_eof120:  pfsm->cs = 120; goto _test_eof; 
	_test_eof121:  pfsm->cs = 121; goto _test_eof; 
	_test_eof158:  pfsm->cs = 158; goto _test_eof; 
	_test_eof122:  pfsm->cs = 122; goto _test_eof; 
	_test_eof123:  pfsm->cs = 123; goto _test_eof; 
	_test_eof124:  pfsm->cs = 124; goto _test_eof; 
	_test_eof125:  pfsm->cs = 125; goto _test_eof; 
	_test_eof126:  pfsm->cs = 126; goto _test_eof; 
	_test_eof127:  pfsm->cs = 127; goto _test_eof; 
	_test_eof128:  pfsm->cs = 128; goto _test_eof; 
	_test_eof129:  pfsm->cs = 129; goto _test_eof; 
	_test_eof130:  pfsm->cs = 130; goto _test_eof; 
	_test_eof131:  pfsm->cs = 131; goto _test_eof; 
	_test_eof132:  pfsm->cs = 132; goto _test_eof; 
	_test_eof133:  pfsm->cs = 133; goto _test_eof; 
	_test_eof134:  pfsm->cs = 134; goto _test_eof; 
	_test_eof135:  pfsm->cs = 135; goto _test_eof; 
	_test_eof136:  pfsm->cs = 136; goto _test_eof; 
	_test_eof137:  pfsm->cs = 137; goto _test_eof; 
	_test_eof138:  pfsm->cs = 138; goto _test_eof; 
	_test_eof139:  pfsm->cs = 139; goto _test_eof; 
	_test_eof140:  pfsm->cs = 140; goto _test_eof; 
	_test_eof141:  pfsm->cs = 141; goto _test_eof; 
	_test_eof142:  pfsm->cs = 142; goto _test_eof; 
	_test_eof143:  pfsm->cs = 143; goto _test_eof; 
	_test_eof144:  pfsm->cs = 144; goto _test_eof; 
	_test_eof145:  pfsm->cs = 145; goto _test_eof; 
	_test_eof146:  pfsm->cs = 146; goto _test_eof; 
	_test_eof159:  pfsm->cs = 159; goto _test_eof; 
	_test_eof160:  pfsm->cs = 160; goto _test_eof; 
	_test_eof161:  pfsm->cs = 161; goto _test_eof; 
	_test_eof162:  pfsm->cs = 162; goto _test_eof; 
	_test_eof163:  pfsm->cs = 163; goto _test_eof; 
	_test_eof164:  pfsm->cs = 164; goto _test_eof; 
	_test_eof165:  pfsm->cs = 165; goto _test_eof; 
	_test_eof166:  pfsm->cs = 166; goto _test_eof; 
	_test_eof167:  pfsm->cs = 167; goto _test_eof; 
	_test_eof168:  pfsm->cs = 168; goto _test_eof; 
	_test_eof169:  pfsm->cs = 169; goto _test_eof; 
	_test_eof170:  pfsm->cs = 170; goto _test_eof; 
	_test_eof147:  pfsm->cs = 147; goto _test_eof; 
	_test_eof148:  pfsm->cs = 148; goto _test_eof; 
	_test_eof149:  pfsm->cs = 149; goto _test_eof; 
	_test_eof150:  pfsm->cs = 150; goto _test_eof; 

	_test_eof: {}
	_out: {}
	}

#line 357 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	
	}

//---- group1 ends here ---------------------------

//---- group0 begins here -------------------------

	
#line 500 "AutosenseImplementation_Ragel2Helper.cpp.rl"


	
#line 2039 "AutosenseImplementation_Ragel2Helper.cpp"
static const int group0_start = 1;
static const int group0_first_final = 83;
static const int group0_error = 0;

static const int group0_en_main = 1;


#line 503 "AutosenseImplementation_Ragel2Helper.cpp.rl"

	void AutosenseImplementation_Ragel2Helper::group_init_group0(s_fsm *pfsm)
	{
		// TODO
		
#line 508 "AutosenseImplementation_Ragel2Helper.cpp.rl"
		
#line 2055 "AutosenseImplementation_Ragel2Helper.cpp"
	{
	 pfsm->cs = group0_start;
	}

#line 509 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	}

	void AutosenseImplementation_Ragel2Helper::group_exec_group0(s_fsm *pfsm, unsigned char *p,
			unsigned char *pe,CTcpSessionAutosenseData &as,size_t myPartyIdx)
	{
		// TODO
		
#line 516 "AutosenseImplementation_Ragel2Helper.cpp.rl"
		size_t otherPartyIdx=((myPartyIdx+1)%2);
		
#line 2071 "AutosenseImplementation_Ragel2Helper.cpp"
	{
	if ( p == pe )
		goto _test_eof;
	switch (  pfsm->cs )
	{
case 1:
	switch( (*p) ) {
		case 43u: goto st2;
		case 45u: goto st7;
		case 50u: goto st10;
		case 65u: goto st17;
		case 72u: goto st40;
		case 85u: goto st52;
		case 89u: goto st69;
		case 97u: goto st17;
		case 117u: goto st52;
		case 121u: goto st69;
	}
	goto st0;
st0:
 pfsm->cs = 0;
	goto _out;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	switch( (*p) ) {
		case 79u: goto st3;
		case 111u: goto st3;
	}
	goto st0;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	switch( (*p) ) {
		case 75u: goto st4;
		case 107u: goto st4;
	}
	goto st0;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	if ( (*p) == 32u )
		goto st5;
	goto st0;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
	}
	goto st6;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	switch( (*p) ) {
		case 10u: goto tr12;
		case 13u: goto tr12;
	}
	goto st6;
tr12:
#line 479 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_POP3] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_POP3_SERVER] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_POP3_CLIENT] = true; }
	goto st83;
st83:
	if ( ++p == pe )
		goto _test_eof83;
case 83:
#line 2145 "AutosenseImplementation_Ragel2Helper.cpp"
	switch( (*p) ) {
		case 10u: goto tr12;
		case 13u: goto tr12;
	}
	goto st84;
tr88:
#line 457 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_YMSG] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st84;
st84:
	if ( ++p == pe )
		goto _test_eof84;
case 84:
#line 2159 "AutosenseImplementation_Ragel2Helper.cpp"
	goto st84;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	switch( (*p) ) {
		case 69u: goto st8;
		case 101u: goto st8;
	}
	goto st0;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	switch( (*p) ) {
		case 82u: goto st9;
		case 114u: goto st9;
	}
	goto st0;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	switch( (*p) ) {
		case 82u: goto st4;
		case 114u: goto st4;
	}
	goto st0;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
	switch( (*p) ) {
		case 48u: goto st11;
		case 50u: goto st15;
	}
	goto st0;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	if ( 48u <= (*p) && (*p) <= 49u )
		goto st12;
	goto st0;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	if ( (*p) == 32u )
		goto st13;
	if ( 9u <= (*p) && (*p) <= 13u )
		goto st13;
	goto st0;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	switch( (*p) ) {
		case 10u: goto tr20;
		case 13u: goto tr20;
		case 32u: goto st13;
	}
	if ( 9u <= (*p) && (*p) <= 12u )
		goto st13;
	goto st14;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	switch( (*p) ) {
		case 10u: goto tr21;
		case 13u: goto tr21;
	}
	goto st14;
tr21:
#line 401 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_NNTP] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st85;
st85:
	if ( ++p == pe )
		goto _test_eof85;
case 85:
#line 2242 "AutosenseImplementation_Ragel2Helper.cpp"
	switch( (*p) ) {
		case 10u: goto tr21;
		case 13u: goto tr21;
	}
	goto st84;
tr20:
#line 401 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_NNTP] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st86;
st86:
	if ( ++p == pe )
		goto _test_eof86;
case 86:
#line 2256 "AutosenseImplementation_Ragel2Helper.cpp"
	switch( (*p) ) {
		case 10u: goto tr20;
		case 13u: goto tr20;
		case 32u: goto st86;
	}
	if ( 9u <= (*p) && (*p) <= 12u )
		goto st86;
	goto st87;
st87:
	if ( ++p == pe )
		goto _test_eof87;
case 87:
	switch( (*p) ) {
		case 10u: goto tr21;
		case 13u: goto tr21;
	}
	goto st87;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
	if ( (*p) == 48u )
		goto st16;
	goto st0;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
	switch( (*p) ) {
		case 10u: goto tr23;
		case 13u: goto tr23;
	}
	goto st16;
tr23:
#line 378 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_FTP] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st88;
st88:
	if ( ++p == pe )
		goto _test_eof88;
case 88:
#line 2298 "AutosenseImplementation_Ragel2Helper.cpp"
	switch( (*p) ) {
		case 10u: goto tr23;
		case 13u: goto tr23;
	}
	goto st84;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	switch( (*p) ) {
		case 80u: goto st18;
		case 112u: goto st18;
	}
	goto st0;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	switch( (*p) ) {
		case 79u: goto st19;
		case 111u: goto st19;
	}
	goto st0;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
	switch( (*p) ) {
		case 80u: goto st20;
		case 112u: goto st20;
	}
	goto st0;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
	if ( (*p) == 32u )
		goto st21;
	goto st0;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st0;
	}
	goto st22;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st23;
	}
	goto st22;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st24;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st24;
	} else
		goto st24;
	goto st0;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st25;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st25;
	} else
		goto st25;
	goto st0;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st26;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st26;
	} else
		goto st26;
	goto st0;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st27;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st27;
	} else
		goto st27;
	goto st0;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st28;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st28;
	} else
		goto st28;
	goto st0;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st29;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st29;
	} else
		goto st29;
	goto st0;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st30;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st30;
	} else
		goto st30;
	goto st0;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st31;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st31;
	} else
		goto st31;
	goto st0;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st32;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st32;
	} else
		goto st32;
	goto st0;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st33;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st33;
	} else
		goto st33;
	goto st0;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st34;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st34;
	} else
		goto st34;
	goto st0;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st35;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st35;
	} else
		goto st35;
	goto st0;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st36;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st36;
	} else
		goto st36;
	goto st0;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st37;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st37;
	} else
		goto st37;
	goto st0;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st38;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st38;
	} else
		goto st38;
	goto st0;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	if ( (*p) < 65u ) {
		if ( 48u <= (*p) && (*p) <= 57u )
			goto st39;
	} else if ( (*p) > 70u ) {
		if ( 97u <= (*p) && (*p) <= 102u )
			goto st39;
	} else
		goto st39;
	goto st0;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	switch( (*p) ) {
		case 10u: goto tr46;
		case 13u: goto tr46;
	}
	goto st0;
tr46:
#line 486 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_POP3] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_POP3_CLIENT] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_POP3_SERVER] = true; }
	goto st89;
st89:
	if ( ++p == pe )
		goto _test_eof89;
case 89:
#line 2583 "AutosenseImplementation_Ragel2Helper.cpp"
	switch( (*p) ) {
		case 10u: goto tr46;
		case 13u: goto tr46;
	}
	goto st84;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	if ( (*p) == 84u )
		goto st41;
	goto st0;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	if ( (*p) == 84u )
		goto st42;
	goto st0;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
	if ( (*p) == 80u )
		goto st43;
	goto st0;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
	if ( (*p) == 47u )
		goto st44;
	goto st0;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st45;
	goto st0;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
	if ( (*p) == 46u )
		goto st46;
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st45;
	goto st0;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st47;
	goto st0;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
	if ( (*p) == 32u )
		goto st48;
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st47;
	goto st0;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st49;
	goto st0;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st50;
	goto st0;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
	if ( 48u <= (*p) && (*p) <= 57u )
		goto st51;
	goto st0;
st51:
	if ( ++p == pe )
		goto _test_eof51;
case 51:
	switch( (*p) ) {
		case 10u: goto tr58;
		case 13u: goto tr58;
	}
	goto st51;
tr58:
#line 430 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_HTTP] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_HTTP_SERVER] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_HTTP_CLIENT] = true; }
	goto st90;
st90:
	if ( ++p == pe )
		goto _test_eof90;
case 90:
#line 2687 "AutosenseImplementation_Ragel2Helper.cpp"
	switch( (*p) ) {
		case 10u: goto tr58;
		case 13u: goto tr58;
	}
	goto st84;
st52:
	if ( ++p == pe )
		goto _test_eof52;
case 52:
	switch( (*p) ) {
		case 83u: goto st53;
		case 115u: goto st53;
	}
	goto st0;
st53:
	if ( ++p == pe )
		goto _test_eof53;
case 53:
	switch( (*p) ) {
		case 69u: goto st54;
		case 101u: goto st54;
	}
	goto st0;
st54:
	if ( ++p == pe )
		goto _test_eof54;
case 54:
	switch( (*p) ) {
		case 82u: goto st55;
		case 114u: goto st55;
	}
	goto st0;
st55:
	if ( ++p == pe )
		goto _test_eof55;
case 55:
	if ( (*p) == 32u )
		goto st56;
	goto st0;
st56:
	if ( ++p == pe )
		goto _test_eof56;
case 56:
	if ( (*p) == 32u )
		goto st0;
	goto st57;
st57:
	if ( ++p == pe )
		goto _test_eof57;
case 57:
	switch( (*p) ) {
		case 10u: goto st58;
		case 13u: goto st58;
		case 32u: goto st0;
	}
	goto st57;
st58:
	if ( ++p == pe )
		goto _test_eof58;
case 58:
	switch( (*p) ) {
		case 10u: goto st58;
		case 13u: goto st58;
		case 32u: goto st0;
		case 80u: goto st59;
		case 81u: goto st65;
		case 112u: goto st59;
		case 113u: goto st65;
	}
	goto st57;
st59:
	if ( ++p == pe )
		goto _test_eof59;
case 59:
	switch( (*p) ) {
		case 10u: goto st58;
		case 13u: goto st58;
		case 32u: goto st0;
		case 65u: goto st60;
		case 97u: goto st60;
	}
	goto st57;
st60:
	if ( ++p == pe )
		goto _test_eof60;
case 60:
	switch( (*p) ) {
		case 10u: goto st58;
		case 13u: goto st58;
		case 32u: goto st0;
		case 83u: goto st61;
		case 115u: goto st61;
	}
	goto st57;
st61:
	if ( ++p == pe )
		goto _test_eof61;
case 61:
	switch( (*p) ) {
		case 10u: goto st58;
		case 13u: goto st58;
		case 32u: goto st0;
		case 83u: goto st62;
		case 115u: goto st62;
	}
	goto st57;
st62:
	if ( ++p == pe )
		goto _test_eof62;
case 62:
	switch( (*p) ) {
		case 10u: goto st58;
		case 13u: goto st58;
		case 32u: goto st63;
	}
	goto st57;
st63:
	if ( ++p == pe )
		goto _test_eof63;
case 63:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st0;
	}
	goto st64;
st64:
	if ( ++p == pe )
		goto _test_eof64;
case 64:
	switch( (*p) ) {
		case 10u: goto st91;
		case 13u: goto st91;
		case 32u: goto st0;
	}
	goto st64;
st91:
	if ( ++p == pe )
		goto _test_eof91;
case 91:
	switch( (*p) ) {
		case 10u: goto st91;
		case 13u: goto st91;
	}
	goto st0;
st65:
	if ( ++p == pe )
		goto _test_eof65;
case 65:
	switch( (*p) ) {
		case 10u: goto st58;
		case 13u: goto st58;
		case 32u: goto st0;
		case 85u: goto st66;
		case 117u: goto st66;
	}
	goto st57;
st66:
	if ( ++p == pe )
		goto _test_eof66;
case 66:
	switch( (*p) ) {
		case 10u: goto st58;
		case 13u: goto st58;
		case 32u: goto st0;
		case 73u: goto st67;
		case 105u: goto st67;
	}
	goto st57;
st67:
	if ( ++p == pe )
		goto _test_eof67;
case 67:
	switch( (*p) ) {
		case 10u: goto st58;
		case 13u: goto st58;
		case 32u: goto st0;
		case 84u: goto st68;
		case 116u: goto st68;
	}
	goto st57;
st68:
	if ( ++p == pe )
		goto _test_eof68;
case 68:
	switch( (*p) ) {
		case 10u: goto st92;
		case 13u: goto st92;
		case 32u: goto st0;
	}
	goto st57;
st92:
	if ( ++p == pe )
		goto _test_eof92;
case 92:
	switch( (*p) ) {
		case 10u: goto st92;
		case 13u: goto st92;
		case 32u: goto st0;
		case 80u: goto st59;
		case 81u: goto st65;
		case 112u: goto st59;
		case 113u: goto st65;
	}
	goto st57;
st69:
	if ( ++p == pe )
		goto _test_eof69;
case 69:
	switch( (*p) ) {
		case 72u: goto st70;
		case 77u: goto st79;
		case 80u: goto st81;
		case 104u: goto st70;
		case 109u: goto st79;
		case 112u: goto st81;
	}
	goto st0;
st70:
	if ( ++p == pe )
		goto _test_eof70;
case 70:
	switch( (*p) ) {
		case 79u: goto st71;
		case 111u: goto st71;
	}
	goto st0;
st71:
	if ( ++p == pe )
		goto _test_eof71;
case 71:
	switch( (*p) ) {
		case 79u: goto st72;
		case 111u: goto st72;
	}
	goto st0;
st72:
	if ( ++p == pe )
		goto _test_eof72;
case 72:
	if ( (*p) == 0u )
		goto st73;
	goto st0;
st73:
	if ( ++p == pe )
		goto _test_eof73;
case 73:
	if ( (*p) <= 12u )
		goto st74;
	goto st0;
st74:
	if ( ++p == pe )
		goto _test_eof74;
case 74:
	if ( (*p) == 0u )
		goto st75;
	goto st0;
st75:
	if ( ++p == pe )
		goto _test_eof75;
case 75:
	if ( (*p) == 0u )
		goto st76;
	goto st0;
st76:
	if ( ++p == pe )
		goto _test_eof76;
case 76:
	goto st77;
st77:
	if ( ++p == pe )
		goto _test_eof77;
case 77:
	goto st78;
st78:
	if ( ++p == pe )
		goto _test_eof78;
case 78:
	if ( (*p) == 0u )
		goto tr88;
	goto st0;
st79:
	if ( ++p == pe )
		goto _test_eof79;
case 79:
	switch( (*p) ) {
		case 83u: goto st80;
		case 115u: goto st80;
	}
	goto st0;
st80:
	if ( ++p == pe )
		goto _test_eof80;
case 80:
	switch( (*p) ) {
		case 71u: goto st72;
		case 103u: goto st72;
	}
	goto st0;
st81:
	if ( ++p == pe )
		goto _test_eof81;
case 81:
	switch( (*p) ) {
		case 78u: goto st82;
		case 110u: goto st82;
	}
	goto st0;
st82:
	if ( ++p == pe )
		goto _test_eof82;
case 82:
	switch( (*p) ) {
		case 83u: goto st72;
		case 115u: goto st72;
	}
	goto st0;
	}
	_test_eof2:  pfsm->cs = 2; goto _test_eof; 
	_test_eof3:  pfsm->cs = 3; goto _test_eof; 
	_test_eof4:  pfsm->cs = 4; goto _test_eof; 
	_test_eof5:  pfsm->cs = 5; goto _test_eof; 
	_test_eof6:  pfsm->cs = 6; goto _test_eof; 
	_test_eof83:  pfsm->cs = 83; goto _test_eof; 
	_test_eof84:  pfsm->cs = 84; goto _test_eof; 
	_test_eof7:  pfsm->cs = 7; goto _test_eof; 
	_test_eof8:  pfsm->cs = 8; goto _test_eof; 
	_test_eof9:  pfsm->cs = 9; goto _test_eof; 
	_test_eof10:  pfsm->cs = 10; goto _test_eof; 
	_test_eof11:  pfsm->cs = 11; goto _test_eof; 
	_test_eof12:  pfsm->cs = 12; goto _test_eof; 
	_test_eof13:  pfsm->cs = 13; goto _test_eof; 
	_test_eof14:  pfsm->cs = 14; goto _test_eof; 
	_test_eof85:  pfsm->cs = 85; goto _test_eof; 
	_test_eof86:  pfsm->cs = 86; goto _test_eof; 
	_test_eof87:  pfsm->cs = 87; goto _test_eof; 
	_test_eof15:  pfsm->cs = 15; goto _test_eof; 
	_test_eof16:  pfsm->cs = 16; goto _test_eof; 
	_test_eof88:  pfsm->cs = 88; goto _test_eof; 
	_test_eof17:  pfsm->cs = 17; goto _test_eof; 
	_test_eof18:  pfsm->cs = 18; goto _test_eof; 
	_test_eof19:  pfsm->cs = 19; goto _test_eof; 
	_test_eof20:  pfsm->cs = 20; goto _test_eof; 
	_test_eof21:  pfsm->cs = 21; goto _test_eof; 
	_test_eof22:  pfsm->cs = 22; goto _test_eof; 
	_test_eof23:  pfsm->cs = 23; goto _test_eof; 
	_test_eof24:  pfsm->cs = 24; goto _test_eof; 
	_test_eof25:  pfsm->cs = 25; goto _test_eof; 
	_test_eof26:  pfsm->cs = 26; goto _test_eof; 
	_test_eof27:  pfsm->cs = 27; goto _test_eof; 
	_test_eof28:  pfsm->cs = 28; goto _test_eof; 
	_test_eof29:  pfsm->cs = 29; goto _test_eof; 
	_test_eof30:  pfsm->cs = 30; goto _test_eof; 
	_test_eof31:  pfsm->cs = 31; goto _test_eof; 
	_test_eof32:  pfsm->cs = 32; goto _test_eof; 
	_test_eof33:  pfsm->cs = 33; goto _test_eof; 
	_test_eof34:  pfsm->cs = 34; goto _test_eof; 
	_test_eof35:  pfsm->cs = 35; goto _test_eof; 
	_test_eof36:  pfsm->cs = 36; goto _test_eof; 
	_test_eof37:  pfsm->cs = 37; goto _test_eof; 
	_test_eof38:  pfsm->cs = 38; goto _test_eof; 
	_test_eof39:  pfsm->cs = 39; goto _test_eof; 
	_test_eof89:  pfsm->cs = 89; goto _test_eof; 
	_test_eof40:  pfsm->cs = 40; goto _test_eof; 
	_test_eof41:  pfsm->cs = 41; goto _test_eof; 
	_test_eof42:  pfsm->cs = 42; goto _test_eof; 
	_test_eof43:  pfsm->cs = 43; goto _test_eof; 
	_test_eof44:  pfsm->cs = 44; goto _test_eof; 
	_test_eof45:  pfsm->cs = 45; goto _test_eof; 
	_test_eof46:  pfsm->cs = 46; goto _test_eof; 
	_test_eof47:  pfsm->cs = 47; goto _test_eof; 
	_test_eof48:  pfsm->cs = 48; goto _test_eof; 
	_test_eof49:  pfsm->cs = 49; goto _test_eof; 
	_test_eof50:  pfsm->cs = 50; goto _test_eof; 
	_test_eof51:  pfsm->cs = 51; goto _test_eof; 
	_test_eof90:  pfsm->cs = 90; goto _test_eof; 
	_test_eof52:  pfsm->cs = 52; goto _test_eof; 
	_test_eof53:  pfsm->cs = 53; goto _test_eof; 
	_test_eof54:  pfsm->cs = 54; goto _test_eof; 
	_test_eof55:  pfsm->cs = 55; goto _test_eof; 
	_test_eof56:  pfsm->cs = 56; goto _test_eof; 
	_test_eof57:  pfsm->cs = 57; goto _test_eof; 
	_test_eof58:  pfsm->cs = 58; goto _test_eof; 
	_test_eof59:  pfsm->cs = 59; goto _test_eof; 
	_test_eof60:  pfsm->cs = 60; goto _test_eof; 
	_test_eof61:  pfsm->cs = 61; goto _test_eof; 
	_test_eof62:  pfsm->cs = 62; goto _test_eof; 
	_test_eof63:  pfsm->cs = 63; goto _test_eof; 
	_test_eof64:  pfsm->cs = 64; goto _test_eof; 
	_test_eof91:  pfsm->cs = 91; goto _test_eof; 
	_test_eof65:  pfsm->cs = 65; goto _test_eof; 
	_test_eof66:  pfsm->cs = 66; goto _test_eof; 
	_test_eof67:  pfsm->cs = 67; goto _test_eof; 
	_test_eof68:  pfsm->cs = 68; goto _test_eof; 
	_test_eof92:  pfsm->cs = 92; goto _test_eof; 
	_test_eof69:  pfsm->cs = 69; goto _test_eof; 
	_test_eof70:  pfsm->cs = 70; goto _test_eof; 
	_test_eof71:  pfsm->cs = 71; goto _test_eof; 
	_test_eof72:  pfsm->cs = 72; goto _test_eof; 
	_test_eof73:  pfsm->cs = 73; goto _test_eof; 
	_test_eof74:  pfsm->cs = 74; goto _test_eof; 
	_test_eof75:  pfsm->cs = 75; goto _test_eof; 
	_test_eof76:  pfsm->cs = 76; goto _test_eof; 
	_test_eof77:  pfsm->cs = 77; goto _test_eof; 
	_test_eof78:  pfsm->cs = 78; goto _test_eof; 
	_test_eof79:  pfsm->cs = 79; goto _test_eof; 
	_test_eof80:  pfsm->cs = 80; goto _test_eof; 
	_test_eof81:  pfsm->cs = 81; goto _test_eof; 
	_test_eof82:  pfsm->cs = 82; goto _test_eof; 

	_test_eof: {}
	_out: {}
	}

#line 518 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	
	}

//---- group0 ends here ---------------------------

//---- group3 begins here -------------------------

	
#line 729 "AutosenseImplementation_Ragel2Helper.cpp.rl"


	
#line 3115 "AutosenseImplementation_Ragel2Helper.cpp"
static const int group3_start = 1;
static const int group3_first_final = 42;
static const int group3_error = 0;

static const int group3_en_dns_consume_length = 44;
static const int group3_en_dns_consume_q = 25;
static const int group3_en_dns_consume_rr = 32;
static const int group3_en_main = 1;


#line 732 "AutosenseImplementation_Ragel2Helper.cpp.rl"

	void AutosenseImplementation_Ragel2Helper::group_init_group3(s_fsm *pfsm)
	{
		// TODO
		
#line 737 "AutosenseImplementation_Ragel2Helper.cpp.rl"
		
#line 3134 "AutosenseImplementation_Ragel2Helper.cpp"
	{
	 pfsm->cs = group3_start;
	 pfsm->top = 0;
	}

#line 738 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	}

	void AutosenseImplementation_Ragel2Helper::group_exec_group3(s_fsm *pfsm, unsigned char *p,
			unsigned char *pe,CTcpSessionAutosenseData &as,size_t myPartyIdx)
	{
		// TODO
		
#line 745 "AutosenseImplementation_Ragel2Helper.cpp.rl"
		size_t otherPartyIdx=((myPartyIdx+1)%2);
		
#line 3151 "AutosenseImplementation_Ragel2Helper.cpp"
	{
	if ( p == pe )
		goto _test_eof;
	goto _resume;

_again:
	switch (  pfsm->cs ) {
		case 1: goto st1;
		case 2: goto st2;
		case 3: goto st3;
		case 4: goto st4;
		case 5: goto st5;
		case 6: goto st6;
		case 7: goto st7;
		case 8: goto st8;
		case 9: goto st9;
		case 10: goto st10;
		case 11: goto st11;
		case 12: goto st12;
		case 42: goto st42;
		case 0: goto st0;
		case 43: goto st43;
		case 13: goto st13;
		case 14: goto st14;
		case 15: goto st15;
		case 16: goto st16;
		case 17: goto st17;
		case 18: goto st18;
		case 19: goto st19;
		case 20: goto st20;
		case 21: goto st21;
		case 22: goto st22;
		case 23: goto st23;
		case 24: goto st24;
		case 25: goto st25;
		case 26: goto st26;
		case 27: goto st27;
		case 28: goto st28;
		case 29: goto st29;
		case 45: goto st45;
		case 30: goto st30;
		case 31: goto st31;
		case 32: goto st32;
		case 33: goto st33;
		case 34: goto st34;
		case 35: goto st35;
		case 36: goto st36;
		case 46: goto st46;
		case 37: goto st37;
		case 38: goto st38;
		case 39: goto st39;
		case 40: goto st40;
		case 41: goto st41;
		case 44: goto st44;
	default: break;
	}

	if ( ++p == pe )
		goto _test_eof;
_resume:
	switch (  pfsm->cs )
	{
st1:
	if ( ++p == pe )
		goto _test_eof1;
case 1:
	goto st2;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	goto st3;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	if ( (*p) < 32u ) {
		if ( (*p) <= 23u )
			goto st4;
	} else if ( (*p) > 47u ) {
		if ( (*p) > 151u ) {
			if ( 160u <= (*p) && (*p) <= 175u )
				goto st4;
		} else if ( (*p) >= 128u )
			goto st4;
	} else
		goto st4;
	goto st0;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	if ( (*p) < 48u ) {
		if ( (*p) < 16u ) {
			if ( (*p) <= 10u )
				goto st5;
		} else if ( (*p) > 26u ) {
			if ( 32u <= (*p) && (*p) <= 42u )
				goto st5;
		} else
			goto st5;
	} else if ( (*p) > 58u ) {
		if ( (*p) < 144u ) {
			if ( 128u <= (*p) && (*p) <= 138u )
				goto st5;
		} else if ( (*p) > 154u ) {
			if ( (*p) > 170u ) {
				if ( 176u <= (*p) && (*p) <= 186u )
					goto st5;
			} else if ( (*p) >= 160u )
				goto st5;
		} else
			goto st5;
	} else
		goto st5;
	goto st0;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	if ( (*p) == 0u )
		goto st6;
	goto st24;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	if ( (*p) == 0u )
		goto st7;
	goto st18;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	if ( (*p) == 0u )
		goto st8;
	goto st17;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	if ( (*p) == 0u )
		goto st9;
	goto st16;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	if ( (*p) == 0u )
		goto st10;
	goto st15;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
	if ( (*p) == 0u )
		goto st11;
	goto st14;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	if ( (*p) == 0u )
		goto st12;
	goto st13;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	if ( (*p) == 0u )
		goto tr19;
	goto tr20;
tr19:
#line 710 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ if (p==pe) { as.m_machines.protos[AS_PROTO_DNS] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; } }
	goto st42;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
#line 3332 "AutosenseImplementation_Ragel2Helper.cpp"
	goto st0;
st0:
 pfsm->cs = 0;
	goto _out;
tr20:
#line 717 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{{ pfsm->stack[ pfsm->top++] = 43; goto st32;} }
	goto st43;
tr26:
#line 713 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ { pfsm->stack[ pfsm->top++] = 43; goto st25;} }
	goto st43;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
#line 3349 "AutosenseImplementation_Ragel2Helper.cpp"
	goto st43;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	goto tr20;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	goto st13;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
	goto st14;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
	goto st15;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	goto st16;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	goto st19;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
	goto st20;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
	goto st21;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
	goto st22;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
	goto st23;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	goto tr26;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	goto st18;
tr28:
#line 606 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{
pfsm->len = (*p);
{ pfsm->stack[ pfsm->top++] = 25; goto st44;}
}
	goto st25;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
#line 3422 "AutosenseImplementation_Ragel2Helper.cpp"
	if ( (*p) == 0u )
		goto st26;
	if ( (*p) > 63u ) {
		if ( 192u <= (*p) )
			goto st31;
	} else if ( (*p) >= 1u )
		goto tr28;
	goto st0;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	switch( (*p) ) {
		case 0u: goto st27;
		case 128u: goto st30;
	}
	goto st0;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
	if ( (*p) < 42u ) {
		if ( (*p) > 31u ) {
			if ( 33u <= (*p) && (*p) <= 40u )
				goto st28;
		} else if ( (*p) >= 1u )
			goto st28;
	} else if ( (*p) > 48u ) {
		if ( (*p) > 103u ) {
			if ( 249u <= (*p) )
				goto st28;
		} else if ( (*p) >= 100u )
			goto st28;
	} else
		goto st28;
	goto st0;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
	if ( (*p) == 0u )
		goto st29;
	goto st0;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	if ( (*p) == 1u )
		goto tr34;
	if ( (*p) > 4u ) {
		if ( 254u <= (*p) )
			goto tr34;
	} else if ( (*p) >= 3u )
		goto tr34;
	goto st0;
tr34:
#line 626 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_DNS] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
#line 626 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ { pfsm->cs =  pfsm->stack[-- pfsm->top];goto _again;} }
	goto st45;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
#line 3488 "AutosenseImplementation_Ragel2Helper.cpp"
	goto st0;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	if ( (*p) <= 1u )
		goto st28;
	goto st0;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	goto st26;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	if ( (*p) == 0u )
		goto st33;
	if ( (*p) > 63u ) {
		if ( 192u <= (*p) )
			goto st41;
	} else if ( (*p) >= 1u )
		goto tr36;
	goto st0;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	switch( (*p) ) {
		case 0u: goto st34;
		case 128u: goto st37;
	}
	goto st0;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
	if ( (*p) == 41u )
		goto tr41;
	if ( (*p) < 33u ) {
		if ( 1u <= (*p) && (*p) <= 31u )
			goto st35;
	} else if ( (*p) > 48u ) {
		if ( (*p) > 103u ) {
			if ( 249u <= (*p) )
				goto st35;
		} else if ( (*p) >= 100u )
			goto st35;
	} else
		goto st35;
	goto st0;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	if ( (*p) == 0u )
		goto st36;
	goto st0;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
	if ( (*p) == 1u )
		goto tr41;
	if ( (*p) > 4u ) {
		if ( 254u <= (*p) )
			goto tr41;
	} else if ( (*p) >= 3u )
		goto tr41;
	goto st0;
tr41:
#line 652 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_DNS] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
#line 652 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ { pfsm->cs =  pfsm->stack[-- pfsm->top];goto _again;} }
	goto st46;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
#line 3570 "AutosenseImplementation_Ragel2Helper.cpp"
	goto st0;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	if ( (*p) <= 1u )
		goto st35;
	goto st0;
tr36:
#line 606 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{
pfsm->len = (*p);
{ pfsm->stack[ pfsm->top++] = 38; goto st44;}
}
	goto st38;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
#line 3590 "AutosenseImplementation_Ragel2Helper.cpp"
	if ( (*p) == 0u )
		goto st39;
	if ( (*p) > 63u ) {
		if ( 192u <= (*p) )
			goto st41;
	} else if ( (*p) >= 1u )
		goto tr36;
	goto st0;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	switch( (*p) ) {
		case 0u: goto st40;
		case 128u: goto st37;
	}
	goto st0;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	if ( (*p) < 42u ) {
		if ( (*p) > 31u ) {
			if ( 33u <= (*p) && (*p) <= 40u )
				goto st35;
		} else if ( (*p) >= 1u )
			goto st35;
	} else if ( (*p) > 48u ) {
		if ( (*p) > 103u ) {
			if ( 249u <= (*p) )
				goto st35;
		} else if ( (*p) >= 100u )
			goto st35;
	} else
		goto st35;
	goto st0;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	goto st39;
tr46:
#line 598 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{
pfsm->len--;
if (pfsm->len == 0)
{ pfsm->cs =  pfsm->stack[-- pfsm->top];goto _again;}
}
	goto st44;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
#line 3644 "AutosenseImplementation_Ragel2Helper.cpp"
	goto tr46;
	}
	_test_eof1:  pfsm->cs = 1; goto _test_eof; 
	_test_eof2:  pfsm->cs = 2; goto _test_eof; 
	_test_eof3:  pfsm->cs = 3; goto _test_eof; 
	_test_eof4:  pfsm->cs = 4; goto _test_eof; 
	_test_eof5:  pfsm->cs = 5; goto _test_eof; 
	_test_eof6:  pfsm->cs = 6; goto _test_eof; 
	_test_eof7:  pfsm->cs = 7; goto _test_eof; 
	_test_eof8:  pfsm->cs = 8; goto _test_eof; 
	_test_eof9:  pfsm->cs = 9; goto _test_eof; 
	_test_eof10:  pfsm->cs = 10; goto _test_eof; 
	_test_eof11:  pfsm->cs = 11; goto _test_eof; 
	_test_eof12:  pfsm->cs = 12; goto _test_eof; 
	_test_eof42:  pfsm->cs = 42; goto _test_eof; 
	_test_eof43:  pfsm->cs = 43; goto _test_eof; 
	_test_eof13:  pfsm->cs = 13; goto _test_eof; 
	_test_eof14:  pfsm->cs = 14; goto _test_eof; 
	_test_eof15:  pfsm->cs = 15; goto _test_eof; 
	_test_eof16:  pfsm->cs = 16; goto _test_eof; 
	_test_eof17:  pfsm->cs = 17; goto _test_eof; 
	_test_eof18:  pfsm->cs = 18; goto _test_eof; 
	_test_eof19:  pfsm->cs = 19; goto _test_eof; 
	_test_eof20:  pfsm->cs = 20; goto _test_eof; 
	_test_eof21:  pfsm->cs = 21; goto _test_eof; 
	_test_eof22:  pfsm->cs = 22; goto _test_eof; 
	_test_eof23:  pfsm->cs = 23; goto _test_eof; 
	_test_eof24:  pfsm->cs = 24; goto _test_eof; 
	_test_eof25:  pfsm->cs = 25; goto _test_eof; 
	_test_eof26:  pfsm->cs = 26; goto _test_eof; 
	_test_eof27:  pfsm->cs = 27; goto _test_eof; 
	_test_eof28:  pfsm->cs = 28; goto _test_eof; 
	_test_eof29:  pfsm->cs = 29; goto _test_eof; 
	_test_eof45:  pfsm->cs = 45; goto _test_eof; 
	_test_eof30:  pfsm->cs = 30; goto _test_eof; 
	_test_eof31:  pfsm->cs = 31; goto _test_eof; 
	_test_eof32:  pfsm->cs = 32; goto _test_eof; 
	_test_eof33:  pfsm->cs = 33; goto _test_eof; 
	_test_eof34:  pfsm->cs = 34; goto _test_eof; 
	_test_eof35:  pfsm->cs = 35; goto _test_eof; 
	_test_eof36:  pfsm->cs = 36; goto _test_eof; 
	_test_eof46:  pfsm->cs = 46; goto _test_eof; 
	_test_eof37:  pfsm->cs = 37; goto _test_eof; 
	_test_eof38:  pfsm->cs = 38; goto _test_eof; 
	_test_eof39:  pfsm->cs = 39; goto _test_eof; 
	_test_eof40:  pfsm->cs = 40; goto _test_eof; 
	_test_eof41:  pfsm->cs = 41; goto _test_eof; 
	_test_eof44:  pfsm->cs = 44; goto _test_eof; 

	_test_eof: {}
	_out: {}
	}

#line 747 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	
	}

//---- group3 ends here ---------------------------

//---- group2 begins here -------------------------

	
#line 861 "AutosenseImplementation_Ragel2Helper.cpp.rl"


	
#line 3711 "AutosenseImplementation_Ragel2Helper.cpp"
static const int group2_start = 1;
static const int group2_first_final = 64;
static const int group2_error = 0;

static const int group2_en_main = 1;


#line 864 "AutosenseImplementation_Ragel2Helper.cpp.rl"

	void AutosenseImplementation_Ragel2Helper::group_init_group2(s_fsm *pfsm)
	{
		// TODO
		
#line 869 "AutosenseImplementation_Ragel2Helper.cpp.rl"
		
#line 3727 "AutosenseImplementation_Ragel2Helper.cpp"
	{
	 pfsm->cs = group2_start;
	}

#line 870 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	}

	void AutosenseImplementation_Ragel2Helper::group_exec_group2(s_fsm *pfsm, unsigned char *p,
			unsigned char *pe,CTcpSessionAutosenseData &as,size_t myPartyIdx)
	{
		// TODO
		
#line 877 "AutosenseImplementation_Ragel2Helper.cpp.rl"
		size_t otherPartyIdx=((myPartyIdx+1)%2);
		
#line 3743 "AutosenseImplementation_Ragel2Helper.cpp"
	{
	if ( p == pe )
		goto _test_eof;
	switch (  pfsm->cs )
	{
case 1:
	switch( (*p) ) {
		case 67u: goto st18;
		case 73u: goto st38;
		case 77u: goto st43;
		case 82u: goto st48;
		case 255u: goto st55;
	}
	goto st2;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	goto st3;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	if ( (*p) == 133u )
		goto st4;
	if ( (*p) < 40u ) {
		if ( (*p) <= 1u )
			goto st4;
	} else if ( (*p) > 65u ) {
		if ( (*p) > 129u ) {
			if ( 168u <= (*p) && (*p) <= 193u )
				goto st4;
		} else if ( (*p) >= 128u )
			goto st4;
	} else
		goto st4;
	goto st0;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	if ( (*p) < 16u ) {
		if ( (*p) <= 7u )
			goto st5;
	} else if ( (*p) > 23u ) {
		if ( (*p) > 135u ) {
			if ( 144u <= (*p) && (*p) <= 151u )
				goto st5;
		} else if ( (*p) >= 128u )
			goto st5;
	} else
		goto st5;
	goto st0;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	if ( (*p) == 0u )
		goto st6;
	goto st0;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	if ( (*p) <= 1u )
		goto st7;
	goto st0;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	if ( (*p) == 0u )
		goto st8;
	goto st0;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	if ( (*p) <= 1u )
		goto st9;
	goto st0;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	if ( (*p) == 0u )
		goto st10;
	goto st0;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
	if ( (*p) <= 1u )
		goto st11;
	goto st0;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	if ( (*p) == 0u )
		goto st12;
	goto st0;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	if ( (*p) <= 1u )
		goto st13;
	goto st0;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	if ( (*p) == 0u )
		goto st14;
	goto st13;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	if ( (*p) == 0u )
		goto st15;
	goto st0;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
	if ( 32u <= (*p) && (*p) <= 33u )
		goto st16;
	goto st0;
st0:
 pfsm->cs = 0;
	goto _out;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
	if ( (*p) == 0u )
		goto st17;
	goto st0;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	if ( (*p) == 1u )
		goto tr22;
	goto st0;
tr22:
#line 809 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_NETBIOS] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st64;
tr42:
#line 852 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_SIP] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st64;
tr65:
#line 825 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	{ as.m_machines.protos[AS_PROTO_TELNET] = true; as.m_machines.roles[myPartyIdx][AS_ROLE_UNKNOWN] = true; as.m_machines.roles[otherPartyIdx][AS_ROLE_UNKNOWN] = true; }
	goto st64;
st64:
	if ( ++p == pe )
		goto _test_eof64;
case 64:
#line 3907 "AutosenseImplementation_Ragel2Helper.cpp"
	goto st64;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	if ( (*p) == 65u )
		goto st19;
	goto st3;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
	switch( (*p) ) {
		case 78u: goto st20;
		case 133u: goto st4;
	}
	if ( (*p) < 40u ) {
		if ( (*p) <= 1u )
			goto st4;
	} else if ( (*p) > 65u ) {
		if ( (*p) > 129u ) {
			if ( 168u <= (*p) && (*p) <= 193u )
				goto st4;
		} else if ( (*p) >= 128u )
			goto st4;
	} else
		goto st4;
	goto st0;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
	if ( (*p) == 67u )
		goto st21;
	goto st0;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
	if ( (*p) == 69u )
		goto st22;
	goto st0;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
	if ( (*p) == 76u )
		goto st23;
	goto st0;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	if ( (*p) == 32u )
		goto st24;
	goto st0;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	switch( (*p) ) {
		case 83u: goto st25;
		case 115u: goto st25;
	}
	goto st0;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	switch( (*p) ) {
		case 73u: goto st26;
		case 105u: goto st26;
	}
	goto st0;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	switch( (*p) ) {
		case 80u: goto st27;
		case 112u: goto st27;
	}
	goto st0;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
	if ( (*p) == 58u )
		goto st28;
	goto st0;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st29;
	}
	goto st28;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st29;
		case 83u: goto st30;
		case 115u: goto st30;
	}
	goto st28;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st29;
		case 73u: goto st31;
		case 105u: goto st31;
	}
	goto st28;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st29;
		case 80u: goto st32;
		case 112u: goto st32;
	}
	goto st28;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st29;
		case 47u: goto st33;
	}
	goto st28;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st29;
		case 50u: goto st34;
	}
	goto st28;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st29;
		case 46u: goto st35;
	}
	goto st28;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st0;
		case 32u: goto st29;
		case 48u: goto st36;
	}
	goto st28;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
	switch( (*p) ) {
		case 10u: goto st0;
		case 13u: goto st37;
		case 32u: goto st29;
	}
	goto st28;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	if ( (*p) == 10u )
		goto tr42;
	goto st0;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	if ( (*p) == 78u )
		goto st39;
	goto st3;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	switch( (*p) ) {
		case 86u: goto st40;
		case 133u: goto st4;
	}
	if ( (*p) < 40u ) {
		if ( (*p) <= 1u )
			goto st4;
	} else if ( (*p) > 65u ) {
		if ( (*p) > 129u ) {
			if ( 168u <= (*p) && (*p) <= 193u )
				goto st4;
		} else if ( (*p) >= 128u )
			goto st4;
	} else
		goto st4;
	goto st0;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	if ( (*p) == 73u )
		goto st41;
	goto st0;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	if ( (*p) == 84u )
		goto st42;
	goto st0;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
	if ( (*p) == 69u )
		goto st23;
	goto st0;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
	if ( (*p) == 69u )
		goto st44;
	goto st3;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
	switch( (*p) ) {
		case 83u: goto st45;
		case 133u: goto st4;
	}
	if ( (*p) < 40u ) {
		if ( (*p) <= 1u )
			goto st4;
	} else if ( (*p) > 65u ) {
		if ( (*p) > 129u ) {
			if ( 168u <= (*p) && (*p) <= 193u )
				goto st4;
		} else if ( (*p) >= 128u )
			goto st4;
	} else
		goto st4;
	goto st0;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
	if ( (*p) == 83u )
		goto st46;
	goto st0;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
	if ( (*p) == 65u )
		goto st47;
	goto st0;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
	if ( (*p) == 71u )
		goto st42;
	goto st0;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
	if ( (*p) == 69u )
		goto st49;
	goto st3;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
	switch( (*p) ) {
		case 71u: goto st50;
		case 133u: goto st4;
	}
	if ( (*p) < 40u ) {
		if ( (*p) <= 1u )
			goto st4;
	} else if ( (*p) > 65u ) {
		if ( (*p) > 129u ) {
			if ( 168u <= (*p) && (*p) <= 193u )
				goto st4;
		} else if ( (*p) >= 128u )
			goto st4;
	} else
		goto st4;
	goto st0;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
	if ( (*p) == 73u )
		goto st51;
	goto st0;
st51:
	if ( ++p == pe )
		goto _test_eof51;
case 51:
	if ( (*p) == 83u )
		goto st52;
	goto st0;
st52:
	if ( ++p == pe )
		goto _test_eof52;
case 52:
	if ( (*p) == 84u )
		goto st53;
	goto st0;
st53:
	if ( ++p == pe )
		goto _test_eof53;
case 53:
	if ( (*p) == 69u )
		goto st54;
	goto st0;
st54:
	if ( ++p == pe )
		goto _test_eof54;
case 54:
	if ( (*p) == 82u )
		goto st23;
	goto st0;
st55:
	if ( ++p == pe )
		goto _test_eof55;
case 55:
	if ( 251u <= (*p) && (*p) <= 254u )
		goto st56;
	goto st3;
st56:
	if ( ++p == pe )
		goto _test_eof56;
case 56:
	if ( (*p) == 133u )
		goto st57;
	if ( (*p) < 40u ) {
		if ( (*p) <= 1u )
			goto st57;
	} else if ( (*p) > 65u ) {
		if ( (*p) > 129u ) {
			if ( 168u <= (*p) && (*p) <= 193u )
				goto st57;
		} else if ( (*p) >= 128u )
			goto st57;
	} else
		goto st57;
	goto st63;
st57:
	if ( ++p == pe )
		goto _test_eof57;
case 57:
	if ( (*p) == 255u )
		goto st58;
	if ( (*p) < 16u ) {
		if ( (*p) <= 7u )
			goto st5;
	} else if ( (*p) > 23u ) {
		if ( (*p) > 135u ) {
			if ( 144u <= (*p) && (*p) <= 151u )
				goto st5;
		} else if ( (*p) >= 128u )
			goto st5;
	} else
		goto st5;
	goto st0;
st58:
	if ( ++p == pe )
		goto _test_eof58;
case 58:
	if ( 251u <= (*p) && (*p) <= 254u )
		goto st59;
	goto st0;
st59:
	if ( ++p == pe )
		goto _test_eof59;
case 59:
	goto st60;
st60:
	if ( ++p == pe )
		goto _test_eof60;
case 60:
	if ( (*p) == 255u )
		goto st61;
	goto st0;
st61:
	if ( ++p == pe )
		goto _test_eof61;
case 61:
	if ( 251u <= (*p) && (*p) <= 254u )
		goto st62;
	goto st0;
st62:
	if ( ++p == pe )
		goto _test_eof62;
case 62:
	goto tr65;
st63:
	if ( ++p == pe )
		goto _test_eof63;
case 63:
	if ( (*p) == 255u )
		goto st58;
	goto st0;
	}
	_test_eof2:  pfsm->cs = 2; goto _test_eof; 
	_test_eof3:  pfsm->cs = 3; goto _test_eof; 
	_test_eof4:  pfsm->cs = 4; goto _test_eof; 
	_test_eof5:  pfsm->cs = 5; goto _test_eof; 
	_test_eof6:  pfsm->cs = 6; goto _test_eof; 
	_test_eof7:  pfsm->cs = 7; goto _test_eof; 
	_test_eof8:  pfsm->cs = 8; goto _test_eof; 
	_test_eof9:  pfsm->cs = 9; goto _test_eof; 
	_test_eof10:  pfsm->cs = 10; goto _test_eof; 
	_test_eof11:  pfsm->cs = 11; goto _test_eof; 
	_test_eof12:  pfsm->cs = 12; goto _test_eof; 
	_test_eof13:  pfsm->cs = 13; goto _test_eof; 
	_test_eof14:  pfsm->cs = 14; goto _test_eof; 
	_test_eof15:  pfsm->cs = 15; goto _test_eof; 
	_test_eof16:  pfsm->cs = 16; goto _test_eof; 
	_test_eof17:  pfsm->cs = 17; goto _test_eof; 
	_test_eof64:  pfsm->cs = 64; goto _test_eof; 
	_test_eof18:  pfsm->cs = 18; goto _test_eof; 
	_test_eof19:  pfsm->cs = 19; goto _test_eof; 
	_test_eof20:  pfsm->cs = 20; goto _test_eof; 
	_test_eof21:  pfsm->cs = 21; goto _test_eof; 
	_test_eof22:  pfsm->cs = 22; goto _test_eof; 
	_test_eof23:  pfsm->cs = 23; goto _test_eof; 
	_test_eof24:  pfsm->cs = 24; goto _test_eof; 
	_test_eof25:  pfsm->cs = 25; goto _test_eof; 
	_test_eof26:  pfsm->cs = 26; goto _test_eof; 
	_test_eof27:  pfsm->cs = 27; goto _test_eof; 
	_test_eof28:  pfsm->cs = 28; goto _test_eof; 
	_test_eof29:  pfsm->cs = 29; goto _test_eof; 
	_test_eof30:  pfsm->cs = 30; goto _test_eof; 
	_test_eof31:  pfsm->cs = 31; goto _test_eof; 
	_test_eof32:  pfsm->cs = 32; goto _test_eof; 
	_test_eof33:  pfsm->cs = 33; goto _test_eof; 
	_test_eof34:  pfsm->cs = 34; goto _test_eof; 
	_test_eof35:  pfsm->cs = 35; goto _test_eof; 
	_test_eof36:  pfsm->cs = 36; goto _test_eof; 
	_test_eof37:  pfsm->cs = 37; goto _test_eof; 
	_test_eof38:  pfsm->cs = 38; goto _test_eof; 
	_test_eof39:  pfsm->cs = 39; goto _test_eof; 
	_test_eof40:  pfsm->cs = 40; goto _test_eof; 
	_test_eof41:  pfsm->cs = 41; goto _test_eof; 
	_test_eof42:  pfsm->cs = 42; goto _test_eof; 
	_test_eof43:  pfsm->cs = 43; goto _test_eof; 
	_test_eof44:  pfsm->cs = 44; goto _test_eof; 
	_test_eof45:  pfsm->cs = 45; goto _test_eof; 
	_test_eof46:  pfsm->cs = 46; goto _test_eof; 
	_test_eof47:  pfsm->cs = 47; goto _test_eof; 
	_test_eof48:  pfsm->cs = 48; goto _test_eof; 
	_test_eof49:  pfsm->cs = 49; goto _test_eof; 
	_test_eof50:  pfsm->cs = 50; goto _test_eof; 
	_test_eof51:  pfsm->cs = 51; goto _test_eof; 
	_test_eof52:  pfsm->cs = 52; goto _test_eof; 
	_test_eof53:  pfsm->cs = 53; goto _test_eof; 
	_test_eof54:  pfsm->cs = 54; goto _test_eof; 
	_test_eof55:  pfsm->cs = 55; goto _test_eof; 
	_test_eof56:  pfsm->cs = 56; goto _test_eof; 
	_test_eof57:  pfsm->cs = 57; goto _test_eof; 
	_test_eof58:  pfsm->cs = 58; goto _test_eof; 
	_test_eof59:  pfsm->cs = 59; goto _test_eof; 
	_test_eof60:  pfsm->cs = 60; goto _test_eof; 
	_test_eof61:  pfsm->cs = 61; goto _test_eof; 
	_test_eof62:  pfsm->cs = 62; goto _test_eof; 
	_test_eof63:  pfsm->cs = 63; goto _test_eof; 

	_test_eof: {}
	_out: {}
	}

#line 879 "AutosenseImplementation_Ragel2Helper.cpp.rl"
	
	}

//---- group2 ends here ---------------------------


int AutosenseImplementation_Ragel2Helper::group_exec_n(int nGroup, s_fsm *pfsm, unsigned char *p, 
		unsigned char *pe,CTcpSessionAutosenseData &as,size_t myPartyIdx)
{
	switch(nGroup)
	{
		// cases are auto-generated
		case 1:
			group_exec_group1(pfsm, p, pe,as,myPartyIdx);
			if( pfsm->cs == group1_error)
			{
				return -1;
			}
			else if ( pfsm->cs >= group1_first_final)
			{
				return 1;
			}
			else return 0;
			
		case 0:
			group_exec_group0(pfsm, p, pe,as,myPartyIdx);
			if( pfsm->cs == group0_error)
			{
				return -1;
			}
			else if ( pfsm->cs >= group0_first_final)
			{
				return 1;
			}
			else return 0;
			
		case 3:
			group_exec_group3(pfsm, p, pe,as,myPartyIdx);
			if( pfsm->cs == group3_error)
			{
				return -1;
			}
			else if ( pfsm->cs >= group3_first_final)
			{
				return 1;
			}
			else return 0;
			
		case 2:
			group_exec_group2(pfsm, p, pe,as,myPartyIdx);
			if( pfsm->cs == group2_error)
			{
				return -1;
			}
			else if ( pfsm->cs >= group2_first_final)
			{
				return 1;
			}
			else return 0;
			

		default:
			ASSERT(false);
			return -1;
	}
}


