#pragma once

#include "Class.h"

enum class ClassID;

class RecvTable;

class ClientClass // ClientClass
{
public:
	INCONSTRUCTIBLE(ClientClass);

	void* createFn;
	void* createEventFn;
	const char* networkName;
	RecvTable* recvTable;
	ClientClass* next;
	ClassID classID;
	const char* mapClassname;
};
static_assert(sizeof(ClientClass) == 0x1C);