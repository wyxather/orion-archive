#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_DigiClone_Melee_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_DigiClone_Melee.A_DigiClone_Melee_C
// 0x0008 (0x0250 - 0x0248)
class UA_DigiClone_Melee_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_DigiClone_Melee.A_DigiClone_Melee_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void TurnOnOperativeBlades();
	void TurnOffOperativeBlades();
	void OnBeginBringUpWeapon(class AActor** Actor);
	void AN_CloneMelee();
	void ExecuteUbergraph_A_DigiClone_Melee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
