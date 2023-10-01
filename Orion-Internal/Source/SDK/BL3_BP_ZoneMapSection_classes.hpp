#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMapSection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ZoneMapSection.BP_ZoneMapSection_C
// 0x0048 (0x04A0 - 0x0458)
class ABP_ZoneMapSection_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       Section_Name;                                             // 0x0468(0x0028) (Edit, BlueprintVisible)
	class UZoneMapMeshData*                            NewVar_1;                                                 // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Min;                                                      // 0x0488(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     NewVar_2;                                                 // 0x0494(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneMapSection.BP_ZoneMapSection_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ZoneMapSection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
