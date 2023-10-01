#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_AAS_ScheduledEmitters_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C
// 0x0010 (0x0478 - 0x0468)
class ABP_AAS_ScheduledEmitters_C : public AActiveAmbientSound
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (Transient, DuplicateTransient)
	class UCurveFloat*                                 InputCurve;                                               // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_AAS_ScheduledEmitters(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
