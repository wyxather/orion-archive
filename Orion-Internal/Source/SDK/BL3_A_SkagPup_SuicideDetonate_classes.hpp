#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagPup_SuicideDetonate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_SkagPup_SuicideDetonate.A_SkagPup_SuicideDetonate_C
// 0x0010 (0x0258 - 0x0248)
class UA_SkagPup_SuicideDetonate_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf_1;                                                 // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_SkagPup_SuicideDetonate.A_SkagPup_SuicideDetonate_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Detonate();
	void ExecuteUbergraph_A_SkagPup_SuicideDetonate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
