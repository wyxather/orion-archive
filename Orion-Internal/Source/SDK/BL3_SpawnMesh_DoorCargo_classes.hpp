#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnMesh_DoorCargo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnMesh_DoorCargo.SpawnMesh_DoorCargo_C
// 0x0058 (0x0550 - 0x04F8)
class ASpawnMesh_DoorCargo_C : public ABP_SpawnMesh_Skeletal_C
{
public:
	TEnumAsByte<Enum_Spawnmesh_DoorCargoAnimStyle>     DoorAnimType;                                             // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowArtStyleSelection;                                  // 0x04F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_Spawnmesh_DoorCargo>              DoorArtStyle;                                             // 0x04FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x04FB(0x0005) MISSED OFFSET
	TMap<TEnumAsByte<Enum_Spawnmesh_DoorCargo>, TSoftObjectPtr<class UObject>> DoorArtStyleMap;                                          // 0x0500(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnMesh_DoorCargo.SpawnMesh_DoorCargo_C");
		return ptr;
	}


	void SetDoorArtStyle(TEnumAsByte<Enum_Spawnmesh_DoorCargo> DoorArtStyle);
	void InitByAnimType(TEnumAsByte<Enum_Spawnmesh_DoorCargoAnimStyle> DoorAnimType);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
