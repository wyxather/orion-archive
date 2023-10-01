#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_DefenseSkill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Pet_DefenseSkill.A_Pet_DefenseSkill_C
// 0x0010 (0x0228 - 0x0218)
class UA_Pet_DefenseSkill_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      NewPet;                                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Pet_DefenseSkill.A_Pet_DefenseSkill_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Notify_SkillUse();
	void ExecuteUbergraph_A_Pet_DefenseSkill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
