#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Op_ActivateCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Op_ActivateCannon.A_Op_ActivateCannon_C
// 0x0008 (0x0278 - 0x0270)
class UA_Op_ActivateCannon_C : public UOakAction_Anim_ActionAbility_Operative
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Op_ActivateCannon.A_Op_ActivateCannon_C");
		return ptr;
	}


	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void AN_ShowDevice();
	void AN_HideDevice();
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBeginBringUpWeapon(class AActor** Actor);
	void Notify_SwapPlaces();
	void OnServerBegin(class AActor** Actor);
	void ExecuteUbergraph_A_Op_ActivateCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
