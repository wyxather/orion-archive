#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Taunt_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C
// 0x0008 (0x0250 - 0x0248)
class UA_PsychoMale_Taunt_02_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C");
		return ptr;
	}


	void GbxAsyncRequest_Hit_2240004D48A27591019A10BDDF41A7FB(const struct FHitResult& Result);
	void OnBegin(class AActor** Actor);
	void MeleeStrike();
	void ExecuteUbergraph_A_PsychoMale_Taunt_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
