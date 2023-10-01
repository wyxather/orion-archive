#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPContextResolver_PlayerBank_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPContextResolver_PlayerBank.BPContextResolver_PlayerBank_C
// 0x0000 (0x0050 - 0x0050)
class UBPContextResolver_PlayerBank_C : public UAttributeContextResolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPContextResolver_PlayerBank.BPContextResolver_PlayerBank_C");
		return ptr;
	}


	TArray<class UObject*> GetContextForAttribute(class UGbxAttributeData** Attribute, class UObject** ContextSource);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
