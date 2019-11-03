#pragma once

#include <map>

#include "opcodes.h"

#include "instr_basics.h"
#include "instr_builtins.h"
#include "instr_control_flow.h"
#include "instr_text.h"
#include "instr_math.h"
#include "instr_input.h"
#include "instr_icon.h"
#include "instr_matrix.h"
#include "instr_debug.h"

#define ADD_CALLBACK(op) { op, []() -> Instruction* { return new Instr_##op(op); } },

const std::map<Bytecode, std::function<Instruction*()>> callbacks = {
	ADD_CALLBACK(END)
	ADD_CALLBACK(NEW)
	ADD_CALLBACK(OUTPUT)
	ADD_CALLBACK(OUTPUT_FORMAT)
	ADD_CALLBACK(TEST)
	ADD_CALLBACK(NOT)
	ADD_CALLBACK(JMP)
	ADD_CALLBACK(JZ)
	ADD_CALLBACK(RET)
	ADD_CALLBACK(NEWLIST)
	ADD_CALLBACK(SLEEP)
	ADD_CALLBACK(SPAWN)
	ADD_CALLBACK(CALL)
	ADD_CALLBACK(CALLNR)
	ADD_CALLBACK(CALLPATH)
	ADD_CALLBACK(CALLPARENT)
	ADD_CALLBACK(CALLGLOB)
	ADD_CALLBACK(GETVAR)
	ADD_CALLBACK(SETVAR)
	ADD_CALLBACK(GETFLAG)
	ADD_CALLBACK(TEQ)
	ADD_CALLBACK(TNE)
	ADD_CALLBACK(TL)
	ADD_CALLBACK(TG)
	ADD_CALLBACK(TLE)
	ADD_CALLBACK(TGE)
	ADD_CALLBACK(ANEG)
	ADD_CALLBACK(ADD)
	ADD_CALLBACK(SUB)
	ADD_CALLBACK(MUL)
	ADD_CALLBACK(DIV)
	ADD_CALLBACK(MOD)
	ADD_CALLBACK(ROUND)
	ADD_CALLBACK(ROUNDN)
	ADD_CALLBACK(AUGADD)
	ADD_CALLBACK(AUGSUB)
	ADD_CALLBACK(AUGMUL)
	ADD_CALLBACK(AUGDIV)
	ADD_CALLBACK(AUGMOD)
	ADD_CALLBACK(AUGAND)
	ADD_CALLBACK(AUGOR)
	ADD_CALLBACK(AUGXOR)
	ADD_CALLBACK(AUGLSHIFT)
	ADD_CALLBACK(AUGRSHIFT)
	ADD_CALLBACK(PUSHI)
	ADD_CALLBACK(POP)
	ADD_CALLBACK(ITERLOAD)
	ADD_CALLBACK(ITERNEXT)
	ADD_CALLBACK(LOCATE)
	ADD_CALLBACK(PUSHVAL)
	ADD_CALLBACK(INC)
	ADD_CALLBACK(DEC)
	ADD_CALLBACK(SQRT)
	ADD_CALLBACK(POW)
	ADD_CALLBACK(FINDTEXT)
	ADD_CALLBACK(LISTGET)
	ADD_CALLBACK(LISTSET)
	ADD_CALLBACK(ISTYPE)
	ADD_CALLBACK(DBG_FILE)
	ADD_CALLBACK(DBG_LINENO)
	ADD_CALLBACK(ISNULL)
	ADD_CALLBACK(ISINLIST)
	ADD_CALLBACK(CALLNAME)
	ADD_CALLBACK(PROMPTCHECK)
	ADD_CALLBACK(INPUT_)
	ADD_CALLBACK(ICON_NEW)
	ADD_CALLBACK(JMP2)
	ADD_CALLBACK(JNZ)
	ADD_CALLBACK(POPN)
	ADD_CALLBACK(CHECKNUM)
	ADD_CALLBACK(FOR_RANGE)
	ADD_CALLBACK(MD5)
	ADD_CALLBACK(CALL_LIB)
	ADD_CALLBACK(ICON_BLEND)
	ADD_CALLBACK(MATRIX_NEW)
	ADD_CALLBACK(REPLACETEXT)
	ADD_CALLBACK(REGEX_NEW)
};
