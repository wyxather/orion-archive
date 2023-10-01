#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_Planet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ZoneMap_Planet.BP_ZoneMap_Planet_C
// 0x0140 (0x05B8 - 0x0478)
class ABP_ZoneMap_Planet_C : public AZoneMapPlanetViewer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Space;                                                    // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight;                                         // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpaceRoot;                                                // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Atmosphere;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Planet;                                                   // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PlanetRoot;                                               // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Animate_Orbital_Components_FOV_Alpha_876AF08540DB19B150D273AB90428E97;// 0x04B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Animate_Orbital_Components_Space_Rotation_Alpha_876AF08540DB19B150D273AB90428E97;// 0x04BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Animate_Orbital_Components_Planet_Offset_Alpha_876AF08540DB19B150D273AB90428E97;// 0x04C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Animate_Orbital_Components__Direction_876AF08540DB19B150D273AB90428E97;// 0x04C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Animate_Orbital_Components;                               // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Alpha_Value;                                              // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Planet_Surface_DMI;                                       // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Particle_Grid_DMI;                                        // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        DecoRings;                                                // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Ring_Deco_DMI;                                            // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Atmosphere_DMI;                                           // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Space_DMI;                                                // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rotation_Offset;                                          // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	struct FTransform                                  Desired_Transform;                                        // 0x0510(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Delta_Seconds;                                            // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0544(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Cirrus_DMI;                                               // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Sun_Color;                                                // 0x0550(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Sun_Brightness;                                           // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Radius;                                               // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              World_Scale;                                              // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mie_Scale_Height;                                         // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Raleigh_Factor;                                           // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Planet_Radius;                                            // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Atmosphere_Radius;                                        // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Space_Rotation;                                           // 0x057C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Invert_Space_Rotation;                                    // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0589(0x0003) MISSED OFFSET
	struct FRotator                                    Initial_Space_Rotation;                                   // 0x058C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	class UMaterialInterface*                          Planet_Material_Override;                                 // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Atmosphere_Material_Override;                             // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Space_Material_Override;                                  // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneMap_Planet.BP_ZoneMap_Planet_C");
		return ptr;
	}


	void Initialize();
	void UserConstructionScript();
	void Animate_Orbital_Components__FinishedFunc();
	void Animate_Orbital_Components__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Transition_In();
	void Interrupt_Transition_In();
	void Transition_Out();
	void Interrupt_Transition_Out();
	void ReceiveDestroyed();
	void Initialize_Planet();
	void Update();
	void Stop_Animation();
	void ExecuteUbergraph_BP_ZoneMap_Planet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
