#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Switch_GenericButton_V1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C
// 0x0050 (0x0778 - 0x0728)
class AIO_Switch_GenericButton_V1_C : public ABP_IO_Switch_Parent_V1_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0728(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Button_Generic_Cylindrical_V1;                         // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        DisabledLight;                                            // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_X_E6FAAECE4654709E640AF9B4F9548900;            // 0x0748(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_E6FAAECE4654709E640AF9B4F9548900;   // 0x074C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_X_21C529FC42C8AFABBF048BAAD0681640;            // 0x0758(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_21C529FC42C8AFABBF048BAAD0681640;   // 0x075C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x075D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Animation_X_2FC706A24A8E699BAF261C974E847D9F;             // 0x0768(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Animation__Direction_2FC706A24A8E699BAF261C974E847D9F;    // 0x076C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x076D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Animation;                                                // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C");
		return ptr;
	}


	void UserConstructionScript();
	void Animation__FinishedFunc();
	void Animation__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void PlaySwitchMovement(TEnumAsByte<Enum_Switch_ReasonForMoving>* Reason);
	void FailedUse();
	void ExecuteUbergraph_IO_Switch_GenericButton_V1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
