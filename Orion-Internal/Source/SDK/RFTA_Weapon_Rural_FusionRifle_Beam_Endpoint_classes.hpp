#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Rural_FusionRifle_Beam_Endpoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Rural_FusionRifle_Beam_Endpoint.Weapon_Rural_FusionRifle_Beam_Endpoint_C
// 0x0010 (0x0340 - 0x0330)
class AWeapon_Rural_FusionRifle_Beam_Endpoint_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Rural_FusionRifle_Beam_Endpoint.Weapon_Rural_FusionRifle_Beam_Endpoint_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Weapon_Rural_FusionRifle_Beam_Endpoint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
