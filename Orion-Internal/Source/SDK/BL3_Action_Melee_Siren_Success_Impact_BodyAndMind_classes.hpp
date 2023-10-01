#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Siren_Success_Impact_BodyAndMind_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C
// 0x0008 (0x0240 - 0x0238)
class UAction_Melee_Siren_Success_Impact_BodyAndMind_C : public UAction_Melee_Siren_Miss_BodyAndMind_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C");
		return ptr;
	}


	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBeginBringUpWeapon(class AActor** Actor);
	void CameraPush();
	void CameraPop();
	void PlayScreenParticle();
	void ExecuteUbergraph_Action_Melee_Siren_Success_Impact_BodyAndMind(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
