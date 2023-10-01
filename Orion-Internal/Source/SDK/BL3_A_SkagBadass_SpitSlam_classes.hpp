#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagBadass_SpitSlam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C
// 0x0100 (0x0240 - 0x0140)
class UA_SkagBadass_SpitSlam_C : public UGbxAction_StretchBones
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<EOakElementalType, class UWwiseEvent*>        ElementToWwiseBombCharge;                                 // 0x0150(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UWwiseEvent*>        ElementToWwiseBombFire;                                   // 0x01A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UWwiseEvent*>        ElementToWwiseBombFinalCharge;                            // 0x01F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_SkagBadass_SpitSlam.A_SkagBadass_SpitSlam_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Notify_Wwise_FinalCharge();
	void Notify_SpitAttack_Begin();
	void Notify_SpitAttack_End();
	void Notify_SpitAttack_Abort();
	void ExecuteUbergraph_A_SkagBadass_SpitSlam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
