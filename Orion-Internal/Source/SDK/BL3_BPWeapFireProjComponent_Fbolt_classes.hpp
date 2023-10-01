#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeapFireProjComponent_Fbolt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C
// 0x000C (0x0964 - 0x0958)
class UBPWeapFireProjComponent_Fbolt_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	float                                              SecondaryProjDmg_Scalar;                                  // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void EvaluateShot();
	void ExecuteUbergraph_BPWeapFireProjComponent_Fbolt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
