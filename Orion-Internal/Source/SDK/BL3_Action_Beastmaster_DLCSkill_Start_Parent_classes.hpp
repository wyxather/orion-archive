#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_DLCSkill_Start_Parent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C
// 0x0010 (0x0270 - 0x0260)
class UAction_Beastmaster_DLCSkill_Start_Parent_C : public UOakAction_Anim_ActionAbility_Pet
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class AProjectile_Beastmaster_TrapSpawner_C*       Trap;                                                     // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C");
		return ptr;
	}


	void Notify_SpawnTrap();
	void OnServerBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_Beastmaster_DLCSkill_Start_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
