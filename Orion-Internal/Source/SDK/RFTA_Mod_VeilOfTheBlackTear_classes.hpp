#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_VeilOfTheBlackTear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mod_VeilOfTheBlackTear.Mod_VeilOfTheBlackTear_C
// 0x0010 (0x071C - 0x070C)
class AMod_VeilOfTheBlackTear_C : public ARangedWeapon_Mod_Action_C
{
public:
	float                                              HealthAmount;                                             // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                   // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                 // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxLevelDuration;                                         // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_VeilOfTheBlackTear.Mod_VeilOfTheBlackTear_C");
		return ptr;
	}


	void DoAction(class UActionComponent** ActionComponent, int* ActionID);
	void GetDurationScalar(float* Out);
	void ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
