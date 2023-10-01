#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorSkill_Base.ArmorSkill_Base_C
// 0x0008 (0x0230 - 0x0228)
class UArmorSkill_Base_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Base.ArmorSkill_Base_C");
		return ptr;
	}


	void GetTierDescription(class AActor** Actor, int* Tier, struct FText* Out);
	void GetSkillLevel(class AActor** Actor, int* Out);
	void ComputeBonus(float* Bonus, float* SetBonus, int* Level, float* Out);
	void ModifyInspectInfo(class AActor** Actor, int* InspectLevel, struct FInspectInfo* Info, bool* Rtn);
	void GetDescription(class AActor** Actor, struct FText* Out);
	void ReleaseLevel();
	bool AllowAction(class UClass** ActionBP, struct FDamageInfo* InDamageInfo);
	void OnEquipped();
	void ExecuteUbergraph_ArmorSkill_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
