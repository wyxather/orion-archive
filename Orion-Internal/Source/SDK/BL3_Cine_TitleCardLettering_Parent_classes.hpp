#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Cine_TitleCardLettering_Parent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cine_TitleCardLettering_Parent.Cine_TitleCardLettering_Parent_C
// 0x0034 (0x04EC - 0x04B8)
class ACine_TitleCardLettering_Parent_C : public AOakCinematicActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             SubtitleRoot;                                             // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             NameRoot;                                                 // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  ImportantMaterials;                                       // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              StreamingImportanceDuration;                              // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cine_TitleCardLettering_Parent.Cine_TitleCardLettering_Parent_C");
		return ptr;
	}


	void CinematicStream();
	void UserConstructionScript();
	void StreamMe();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Cine_TitleCardLettering_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
