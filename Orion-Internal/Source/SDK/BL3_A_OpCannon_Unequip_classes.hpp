#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_OpCannon_Unequip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_OpCannon_Unequip.A_OpCannon_Unequip_C
// 0x0008 (0x0220 - 0x0218)
class UA_OpCannon_Unequip_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_OpCannon_Unequip.A_OpCannon_Unequip_C");
		return ptr;
	}


	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_A_OpCannon_Unequip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
