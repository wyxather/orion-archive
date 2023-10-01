#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PunkBadassArmored_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PunkBadassArmored.BPChar_PunkBadassArmored_C
// 0x0018 (0x23E0 - 0x23C8)
class ABPChar_PunkBadassArmored_C : public ABPChar_PunkBadass_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x23C8(0x0008) (Transient, DuplicateTransient)
	class UAIExplosiveSpawningComponent_C*             AIExplosiveSpawningComponent1;                            // 0x23D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchManagerComponent*            SceneBodySwitchManager_1;                                 // 0x23D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PunkBadassArmored.BPChar_PunkBadassArmored_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPChar_PunkBadassArmored(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
