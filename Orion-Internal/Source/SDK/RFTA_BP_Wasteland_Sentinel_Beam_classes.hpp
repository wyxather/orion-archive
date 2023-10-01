#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Wasteland_Sentinel_Beam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C
// 0x0010 (0x03D0 - 0x03C0)
class ABP_Wasteland_Sentinel_Beam_C : public ABP_Beam_Projectile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Wasteland_Sentinel_Beam_Impact_Loop_SC;                   // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Wasteland_Sentinel_Beam(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
