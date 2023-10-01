#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakTravelStationResurrectComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakTravelStationResurrectComponent.OakTravelStationResurrectComponent_C
// 0x0008 (0x07A8 - 0x07A0)
class UOakTravelStationResurrectComponent_C : public UTravelStationResurrectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakTravelStationResurrectComponent.OakTravelStationResurrectComponent_C");
		return ptr;
	}


	void ResurrectedAtStation(class APawn* ResurrectedActor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_OakTravelStationResurrectComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
