#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_OperativeDLC_4.Passive_OperativeDLC_3_C
// 0x0031 (0x01E1 - 0x01B0)
class UPassive_OperativeDLC_3_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_OperativeDLC_4;// 0x01B8(0x0028)
	bool                                               SkillReadied;                                             // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_OperativeDLC_4.Passive_OperativeDLC_3_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnActivated();
	void DLCSkill3_OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void DLCSkill3_OnWeaponUsed(class AWeapon* EventWeapon);
	void DLCSkill3_UsedBarrier(bool PickedUp);
	void DLCSkill3_SwappedPlaces();
	void DLCSkill3_SEtDroneTarget(class AActor* NewTarget);
	void ExecuteUbergraph_Passive_OperativeDLC_4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
