#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Character_Root_Broken_FireProjectile_Left_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Character_Root_Broken_FireProjectile_Left.Action_Character_Root_Broken_FireProjectile_Left_C
// 0x0008 (0x0268 - 0x0260)
class UAction_Character_Root_Broken_FireProjectile_Left_C : public UAction_Fire_Projectile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Root_Broken_FireProjectile_Left.Action_Character_Root_Broken_FireProjectile_Left_C");
		return ptr;
	}


	void ExecuteUbergraph_Action_Character_Root_Broken_FireProjectile_Left(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
