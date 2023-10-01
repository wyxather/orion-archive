#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CompanyMan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_CompanyMan.Ability_CompanyMan_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_CompanyMan_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BinaryOperator;// 0x0100(0x0028)
	int                                                StockMoney;                                               // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                KillCount;                                                // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CompanyMan.Ability_CompanyMan_C");
		return ptr;
	}


	void OnActivated();
	void OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnInventoryItemPickedUp(class AActor* PickedUpActor, int Quantity);
	void OnDeactivated();
	void Start_Investing();
	void Stop_Investing();
	void ExecuteUbergraph_Ability_CompanyMan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
