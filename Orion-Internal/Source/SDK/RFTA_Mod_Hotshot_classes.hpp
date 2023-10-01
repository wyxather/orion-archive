#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_Hotshot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mod_Hotshot.Mod_Hotshot_C
// 0x0030 (0x073C - 0x070C)
class AMod_Hotshot_C : public ARangedWeapon_Mod_Action_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0710(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ModDuration;                                              // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RangedDamageMod;                                          // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OnFireDamage;                                             // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BeamDamageType;                                           // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OnFireDuration;                                           // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Hotshot.Mod_Hotshot_C");
		return ptr;
	}


	void IsCurrentWeaponHot(bool* IsHotShotWeapon);
	void GetProcChance(float* Out);
	void DoAction(class UActionComponent** ActionComponent, int* ActionID);
	void ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void GetOnFireDamage(float* Out);
	void ApplyProc(struct FDamageInfo* DamageInfo);
	void ShouldProc(bool* Out);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	class UClass* GetDamageType();
	void NotifyHitTarget(struct FDamageInfo* DamageInfo);
	void ExecuteUbergraph_Mod_Hotshot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
