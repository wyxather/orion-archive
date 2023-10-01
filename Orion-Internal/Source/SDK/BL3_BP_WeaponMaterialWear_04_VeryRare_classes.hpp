#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_WeaponMaterialWear_04_VeryRare_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C
// 0x0008 (0x0078 - 0x0070)
class UBP_WeaponMaterialWear_04_VeryRare_C : public UBP_WeaponMaterialWear_00_Master_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0070(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C");
		return ptr;
	}


	void OnInitializeBalanceState(class AActor** InventoryActor, class UInventoryBalanceStateComponent** InventoryBalanceState);
	void OnInitializeComponent(class AActor** InventoryActor, class UInventoryBalanceStateComponent** InventoryBalanceState);
	void OnBeginPlay(class AActor** InventoryActor, class UInventoryBalanceStateComponent** InventoryBalanceState);
	void ExecuteUbergraph_BP_WeaponMaterialWear_04_VeryRare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
