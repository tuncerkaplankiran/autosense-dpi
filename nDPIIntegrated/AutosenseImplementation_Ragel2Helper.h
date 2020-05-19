// This is a generated file. Do not edit.
// AutosenseImplementation_Ragel2Helper.h.tmpl -> AutosenseImplementation_Ragel2Helper.h


// CHEETAH template engine. 
// Uses # signs for keywords
// Uses $ signs for variable access
//
 
#pragma once
#include "IfMcFePlugin_DecTypes.h"

#define AUTOSENSEMANAGER_IMPL_RAGEL2_NUM_GROUPS 4
#define AUTOSENSEMANAGER_IMPL_RAGEL2_NUM_PROTOS 14
#define AUTOSENSEMANAGER_IMPL_RAGEL2_NUM_ROLES  7

class CTcpSessionAutosenseData;

class AutosenseImplementation_Ragel2Helper
{
	// Place header code here
	// It's better to avoid inline methods as most of this file is template generated

public:

	struct s_fsm
		{
			
			s_fsm()
			{
			  cs=0;
			  finished=false;
			  len=0;
			  top=0;
			  stack[0]=0;
			  stack[1]=0;
			}
			int cs;
			int top, stack[2]; /* DNS ragel call stack is two deep */
			uint32_t len; 
			bool finished;
		};	


	static IDL_L7_PROTOCOL_NAME GetL7ProtocolName(int nProto);
	static IDL_L7_PROTOCOL_ROLE GetL7ProtocoRole(int nRole);

	static void group_init_n(int nGroup, s_fsm *pfsm);
	static int group_exec_n(int nGroup, s_fsm *pfsm, unsigned char *p, unsigned char *pe,CTcpSessionAutosenseData &as,size_t myPartyIdx);

public:
	// following methods are auto-generated


	// group1 begins here -------------------------
	static void group_init_group1(s_fsm *pfsm);
	static void group_exec_group1(s_fsm *pfsm, unsigned char *p, unsigned char *pe,CTcpSessionAutosenseData &as,size_t myPartyIdx);

	// group1 ends here ---------------------------

	// group0 begins here -------------------------
	static void group_init_group0(s_fsm *pfsm);
	static void group_exec_group0(s_fsm *pfsm, unsigned char *p, unsigned char *pe,CTcpSessionAutosenseData &as,size_t myPartyIdx);

	// group0 ends here ---------------------------

	// group3 begins here -------------------------
	static void group_init_group3(s_fsm *pfsm);
	static void group_exec_group3(s_fsm *pfsm, unsigned char *p, unsigned char *pe,CTcpSessionAutosenseData &as,size_t myPartyIdx);

	// group3 ends here ---------------------------

	// group2 begins here -------------------------
	static void group_init_group2(s_fsm *pfsm);
	static void group_exec_group2(s_fsm *pfsm, unsigned char *p, unsigned char *pe,CTcpSessionAutosenseData &as,size_t myPartyIdx);

	// group2 ends here ---------------------------

};

