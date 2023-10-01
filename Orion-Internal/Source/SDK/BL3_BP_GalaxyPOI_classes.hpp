#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GalaxyPOI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GalaxyPOI.BP_GalaxyPOI_C
// 0x0038 (0x05E8 - 0x05B0)
class ABP_GalaxyPOI_C : public AOakZoneMapIcon_POI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlanetMapData_C*                            PlanetMapData;                                            // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x05D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class AZoneMapViewer*                              Owning_Zone_Map;                                          // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GalaxyPOI.BP_GalaxyPOI_C");
		return ptr;
	}


	void UserConstructionScript();
	void End_Zone_Map_Cursor_Over();
	void Begin_Zone_Map_Cursor_Over();
	void Activate_POI();
	void ReceiveBeginPlay();
	void On_Begin_Zone_Map_Cursor_Over();
	void On_End_Zone_Map_Cursor_Over();
	void ExecuteUbergraph_BP_GalaxyPOI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
