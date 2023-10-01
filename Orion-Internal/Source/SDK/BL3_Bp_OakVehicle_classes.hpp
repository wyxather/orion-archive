#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Bp_OakVehicle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bp_OakVehicle.BP_OakVehicle_C
// 0x0040 (0x13D8 - 0x1398)
class ABP_OakVehicle_C : public AOakVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1398(0x0008) (Transient, DuplicateTransient)
	class UUseComponent*                               Use;                                                      // 0x13A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    ScanSuccess;                                              // 0x13A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ScanStarted;                                              // 0x13B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ScanCancelled;                                            // 0x13C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bp_OakVehicle.BP_OakVehicle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnScanningStarted();
	void OnScanningSuccess();
	void OnScanningCancelled();
	void ExecuteUbergraph_BP_OakVehicle(int EntryPoint);
	void ScanCancelled__DelegateSignature();
	void ScanStarted__DelegateSignature();
	void ScanSuccess__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
