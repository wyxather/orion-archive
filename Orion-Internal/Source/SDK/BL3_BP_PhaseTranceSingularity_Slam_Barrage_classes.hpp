#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PhaseTranceSingularity_Slam_Barrage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C
// 0x0008 (0x05B0 - 0x05A8)
class ABP_PhaseTranceSingularity_Slam_Barrage_C : public ABP_PhaseTranceSingularity_Slam_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Barrage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
