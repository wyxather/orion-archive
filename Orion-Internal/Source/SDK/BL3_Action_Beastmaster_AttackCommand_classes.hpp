#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_AttackCommand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C
// 0x0018 (0x0230 - 0x0218)
class UAction_Beastmaster_AttackCommand_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter*                               BeastmasterCharacter;                                     // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter*                               BeastmasterPet;                                           // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C");
		return ptr;
	}


	void Notify_Attack();
	void OnBeginBringUpWeapon(class AActor** Actor);
	void OnBegin(class AActor** Actor);
	void Notify_Feedback();
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_Action_Beastmaster_AttackCommand(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
