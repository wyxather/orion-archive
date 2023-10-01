#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CatchARide_Platform_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CatchARide_Platform.BP_CatchARide_Platform_C
// 0x0020 (0x04D8 - 0x04B8)
class ABP_CatchARide_Platform_C : public ACatchARidePlatform
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B8(0x0008) (Transient, DuplicateTransient)
	class UGbxChildActorComponent*                     GbxChildActor;                                            // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    VehicleScanned;                                           // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CatchARide_Platform.BP_CatchARide_Platform_C");
		return ptr;
	}


	void UserConstructionScript();
	void DigistructIn(bool* bIsScanning);
	void DigistructOut();
	void StopScanFeedback();
	void ExecuteUbergraph_BP_CatchARide_Platform(int EntryPoint);
	void VehicleScanned__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
