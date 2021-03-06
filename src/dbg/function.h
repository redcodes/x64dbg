#ifndef _FUNCTION_H
#define _FUNCTION_H

#include "addrinfo.h"

struct FUNCTIONSINFO
{
    char mod[MAX_MODULE_SIZE];
    duint start;
    duint end;
    bool manual;
    duint instructioncount;
};

bool FunctionAdd(duint Start, duint End, bool Manual, duint InstructionCount = 0);
bool FunctionGet(duint Address, duint* Start = nullptr, duint* End = nullptr, duint* InstrCount = nullptr);
bool FunctionOverlaps(duint Start, duint End);
bool FunctionDelete(duint Address);
void FunctionDelRange(duint Start, duint End);
void FunctionCacheSave(JSON Root);
void FunctionCacheLoad(JSON Root);
bool FunctionEnum(FUNCTIONSINFO* List, size_t* Size);
void FunctionClear();
void FunctionGetList(std::vector<FUNCTIONSINFO> & list);
bool FunctionGetInfo(duint Address, FUNCTIONSINFO* info);

#endif // _FUNCTION_H