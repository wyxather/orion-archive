#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PunkBadass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PunkBadass.BPChar_PunkBadass_C
// 0x001C (0x23C8 - 0x23AC)
class ABPChar_PunkBadass_C : public ABPChar_PunkShared_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x23AC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x23B0(0x0008) (Transient, DuplicateTransient)
	class UAIExplosiveSpawningComponent_C*             AIExplosiveSpawningComponent;                             // 0x23B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchManagerComponent*            SceneBodySwitchManager;                                   // 0x23C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PunkBadass.BPChar_PunkBadass_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPChar_PunkBadass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
