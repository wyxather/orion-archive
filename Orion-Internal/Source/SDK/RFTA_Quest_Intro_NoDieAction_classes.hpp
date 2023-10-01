#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Quest_Intro_NoDieAction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Quest_Intro_NoDieAction.Quest_Intro_NoDieAction_C
// 0x0009 (0x0231 - 0x0228)
class UQuest_Intro_NoDieAction_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Fired;                                                    // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Intro_NoDieAction.Quest_Intro_NoDieAction_C");
		return ptr;
	}


	void FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
	void OnComputeStats();
	void ExecuteUbergraph_Quest_Intro_NoDieAction(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
