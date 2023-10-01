#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_SimpleAggro_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAction_SimpleAggro.AIAction_SimpleAggro_C
// 0x0008 (0x0668 - 0x0660)
class UAIAction_SimpleAggro_C : public UAIAction_OnAggro
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_SimpleAggro.AIAction_SimpleAggro_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_SimpleAggro(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
