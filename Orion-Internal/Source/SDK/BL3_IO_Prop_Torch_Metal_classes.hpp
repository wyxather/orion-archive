#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Prop_Torch_Metal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Prop_Torch_Metal.IO_Prop_Torch_Metal_C
// 0x0070 (0x05E0 - 0x0570)
class AIO_Prop_Torch_Metal_C : public AIO_Prop_Parent_C
{
public:
	class UGbxChildActorComponent*                     GbxChildActor;                                            // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInstancedStaticMeshComponent*               Skull;                                                    // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Pipe;                                                     // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NumSkulls;                                                // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasFireFX_;                                               // 0x058C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	struct FVector                                     BaseSkullLocation;                                        // 0x0590(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SkullScale;                                               // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SkullRotation;                                            // 0x05A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewSkullLocation;                                         // 0x05AC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                EncroachCheckTimer;                                       // 0x05B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                               RStream_NumSkulls;                                        // 0x05C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                               RStream_SkullRotation_Z;                                  // 0x05C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                               RStream_SkullRotation_X;                                  // 0x05D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                               RStream_SkullLocation_Z;                                  // 0x05D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Prop_Torch_Metal.IO_Prop_Torch_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
