#pragma once

#include "Class.h"

enum class SendPropType;

class RecvProp
{
public:
	INCONSTRUCTIBLE(RecvProp);

	char* m_pVarName;
	SendPropType m_RecvType;
	int	m_Flags;
	int	m_StringBufferSize;
	bool m_bInsideArray;
	const void* m_pExtraData;
	RecvProp* m_pArrayProp;
	void* m_ArrayLengthProxy;
	void* m_ProxyFn;
	void* m_DataTableProxyFn;
	RecvTable* m_pDataTable;
	int	m_Offset;
	int	m_ElementStride;
	int	m_nElements;
	const char* m_pParentArrayPropName;
};
static_assert(sizeof(RecvProp) == 0x3C);

class RecvTable
{
public:
	INCONSTRUCTIBLE(RecvTable);

	RecvProp* m_pProps;
	int m_nProps;
	void* m_pDecoder;
	char* m_pNetTableName;
	bool m_bInitialized;
	bool m_bInMainList;
};
static_assert(sizeof(RecvTable) == 0x14);