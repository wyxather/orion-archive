#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Badass_Taunt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PsychoMale_Badass_Taunt.A_PsychoMale_Badass_Taunt_C
// 0x0008 (0x0250 - 0x0248)
class UA_PsychoMale_Badass_Taunt_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PsychoMale_Badass_Taunt.A_PsychoMale_Badass_Taunt_C");
		return ptr;
	}


	void GbxAsyncRequest_Hit_948A6ADA410F5FFFB7C3B1AE9D8F0327(const struct FHitResult& Result);
	void OnBegin(class AActor** Actor);
	void MeleeStrike();
	void ExecuteUbergraph_A_PsychoMale_Badass_Taunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
