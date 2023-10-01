#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_WeaponMelee_Base_Success_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C
// 0x0008 (0x0220 - 0x0218)
class UAction_WeaponMelee_Base_Success_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_WeaponMelee_Base_Success.Action_WeaponMelee_Base_Success_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void CameraPush();
	void OnBeginBringUpWeapon(class AActor** Actor);
	void CameraPop();
	void ExecuteUbergraph_Action_WeaponMelee_Base_Success(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
