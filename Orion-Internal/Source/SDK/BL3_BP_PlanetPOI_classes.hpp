#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PlanetPOI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlanetPOI.BP_PlanetPOI_C
// 0x0049 (0x05F9 - 0x05B0)
class ABP_PlanetPOI_C : public AOakZoneMapIcon_POI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_PlanetRegion;                                          // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Select_Alpha_302A372A49B5F5677C5019B5F63D6E29;            // 0x05C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Select__Direction_302A372A49B5F5677C5019B5F63D6E29;       // 0x05C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Select;                                                   // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x05D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class AZoneMapViewer*                              Owning_Zone_Map;                                          // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UZoneMapData_Base_C*                         Zone_Map_Data;                                            // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI_PlanetPOI;                                            // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Highlighted;                                              // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlanetPOI.BP_PlanetPOI_C");
		return ptr;
	}


	void UserConstructionScript();
	void Select__FinishedFunc();
	void Select__UpdateFunc();
	void Activate_POI();
	void ReceiveBeginPlay();
	void End_Zone_Map_Cursor_Over();
	void Begin_Zone_Map_Cursor_Over();
	void Highlight_POI();
	void ExecuteUbergraph_BP_PlanetPOI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
