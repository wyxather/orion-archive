#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Siren_Overrun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C
// 0x0009 (0x08C9 - 0x08C0)
class UControlledMove_Siren_Overrun_C : public UOakControlledMove_Player
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (Transient, DuplicateTransient)
	bool                                               HitTargetable;                                            // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C");
		return ptr;
	}


	void OnHitTargetable(class AActor** HitActor, struct FVector* HitNormal);
	void OnServerStop(bool* bInterrupted);
	void OnStop(bool* bInterrupted);
	void ExecuteUbergraph_ControlledMove_Siren_Overrun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
