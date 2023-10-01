#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_TinkLoot_Vault_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANav_TinkLoot_Vault.ANav_TinkLoot_Vault_C
// 0x0008 (0x01B0 - 0x01A8)
class UANav_TinkLoot_Vault_C : public UGbxAction_NavAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANav_TinkLoot_Vault.ANav_TinkLoot_Vault_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_ANav_TinkLoot_Vault(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
