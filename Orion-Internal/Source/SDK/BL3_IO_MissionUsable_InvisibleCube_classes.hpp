#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionUsable_InvisibleCube_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionUsable_InvisibleCube.IO_MissionUsable_InvisibleCube_C
// 0x0020 (0x0750 - 0x0730)
class AIO_MissionUsable_InvisibleCube_C : public AIO_MissionUsable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDA_MissionUsable_Invisible_C*               DataAsset;                                                // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionUsable_InvisibleCube.IO_MissionUsable_InvisibleCube_C");
		return ptr;
	}


	void UserConstructionScript();
	void Play_Feedback_UsableDefault();
	void Play_Feedback_Usable();
	void Play_Feedback_InUse();
	void Play_Feedback_Used();
	void ExecuteUbergraph_IO_MissionUsable_InvisibleCube(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
