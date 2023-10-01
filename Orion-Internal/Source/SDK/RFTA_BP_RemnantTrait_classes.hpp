#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RemnantTrait_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RemnantTrait.BP_RemnantTrait_C
// 0x0001 (0x00F1 - 0x00F0)
class UBP_RemnantTrait_C : public UTrait
{
public:
	bool                                               HideNotification;                                         // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemnantTrait.BP_RemnantTrait_C");
		return ptr;
	}


	void DoActionOnTarget(class UClass** Action, class AActor** Target);
	void IsTargetAggro(class AActor** Target, bool* Out);
	void DoAction(class UClass** ActionBP, int* ActionID);
	void GetCharacter(class ACharacterGunfire** Out);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
