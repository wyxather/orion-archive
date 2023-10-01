#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TEDBehavior_Horizon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C
// 0x000C (0x0084 - 0x0078)
class UBP_TEDBehavior_Horizon_C : public UTedioreBehavior_TargetCombo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (Transient, DuplicateTransient)
	float                                              Singularity;                                              // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TEDBehavior_Horizon.BP_TEDBehavior_Horizon_C");
		return ptr;
	}


	void K2_OnComboTargetTriggered(class ATedioreProjectile** Projectile);
	void K2_ComboTargetTriggeredEvent(class ATedioreProjectile** Projectile);
	void ExecuteUbergraph_BP_TEDBehavior_Horizon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
