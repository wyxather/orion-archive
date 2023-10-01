#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWepFireProjectile_Skeksis_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C
// 0x0028 (0x0980 - 0x0958)
class UBPWepFireProjectile_Skeksis_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      LightProjectile;                                          // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       ProjDamageScalar;                                         // 0x0968(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWepFireProjectile_Skeksis.BPWepFireProjectile_Skeksis_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void NotifyUseFinished_Event();
	void ExecuteUbergraph_BPWepFireProjectile_Skeksis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
