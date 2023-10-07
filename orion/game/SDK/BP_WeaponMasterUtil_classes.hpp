#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_WeaponMasterUtil.BP_WeaponMasterUtil_C
class UBP_WeaponMasterUtil_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_WeaponMasterUtil_C* GetDefaultObj();

	void AcquisitionAbility(class FName LegendWeapon, class UObject* __WorldContext, bool* IsLearned, class FName* AbilityLabel);
	void TryAcquisitionSupportAbility(class UObject* __WorldContext, bool* IsLearned, class FName* AbilityLabel, int32* AbilityIndex);
	void GetWeaponMasterJobLicenseItemLabel(class UObject* __WorldContext, class FName* ItemLabel);
	void AcquisitionWeaponMasterJob(class UObject* __WorldContext);
	void BuyLegendWeapon(TArray<class FName>& Weapons, class UObject* __WorldContext);
	void IsFirstSoldLegendWeapon(class UObject* __WorldContext, bool* Return);
	void HaveWeaponMasterJob(class UObject* __WorldContext, bool* Return);
	void IsFirstTalk(class UObject* __WorldContext, bool* Return);
	void MakeWeaponListTextForDialog(TArray<class FName>& Weapons, class UObject* __WorldContext, class FText* Text);
	void GetLegendWeaponsInBackpack(class UObject* __WorldContext, TArray<class FName>* WeaponLabels);
	void ConvertRustWeaponToLegendWeapon(class FName RustedWeapon, class UObject* __WorldContext, class FName* LegendWeapon);
	void GetSoldLegentWeapon(class UObject* __WorldContext, bool* IsSold, TArray<class FName>* SoldWeapons, int32* TotalPrice);
	void GetLegendWeaponFlagList(class UObject* __WorldContext, TMap<class FName, class FName>* FlagList);
	void IsAllActiveLegendWeaponFlag(class UObject* __WorldContext, bool* Return);
	void IsHaveRustedWeapon(class UObject* __WorldContext, bool* Return);
	void GetRustedWeaponsInBackpack(class UObject* __WorldContext, TArray<class FName>* WeaponLabels);
};

}


