#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_DigiClone_Death_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_DigiClone_Death.Action_DigiClone_Death_C
// 0x0018 (0x0260 - 0x0248)
class UAction_DigiClone_Death_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter*                               My_Owner;                                                 // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CoordinatedEffect;                                        // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_DigiClone_Death.Action_DigiClone_Death_C");
		return ptr;
	}


	void OnServerBegin(class AActor** Actor);
	void PlayDeathCE();
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void PlayScriptDeath();
	void ExecuteUbergraph_Action_DigiClone_Death(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
