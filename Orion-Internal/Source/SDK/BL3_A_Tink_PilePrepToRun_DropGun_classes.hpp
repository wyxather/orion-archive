#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_PilePrepToRun_DropGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Tink_PilePrepToRun_DropGun.A_Tink_PilePrepToRun_DropGun_C
// 0x0008 (0x0250 - 0x0248)
class UA_Tink_PilePrepToRun_DropGun_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Tink_PilePrepToRun_DropGun.A_Tink_PilePrepToRun_DropGun_C");
		return ptr;
	}


	void DropGun();
	void SwapGear();
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_A_Tink_PilePrepToRun_DropGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
