#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Pan_EyeOfTheStorm_Actions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Pan_EyeOfTheStorm_Actions.Weapon_Pan_EyeOfTheStorm_Actions_C
// 0x0008 (0x0258 - 0x0250)
class UWeapon_Pan_EyeOfTheStorm_Actions_C : public UAction_List_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Pan_EyeOfTheStorm_Actions.Weapon_Pan_EyeOfTheStorm_Actions_C");
		return ptr;
	}


	void OnActionStart();
	void ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_Actions(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
