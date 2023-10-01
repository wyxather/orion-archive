#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_Digiclone_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C
// 0x0008 (0x0280 - 0x0278)
class UAction_Operative_Digiclone_Base_C : public UOakAction_Anim_ActionAbility_Digiclone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C");
		return ptr;
	}


	void AN_ShowDevice();
	void AN_HideDevice();
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBeginBringUpWeapon(class AActor** Actor);
	void ExecuteUbergraph_Action_Operative_Digiclone_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
