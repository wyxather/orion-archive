#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagBarfer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_SkagBarfer.BPChar_SkagBarfer_C
// 0x0018 (0x2618 - 0x2600)
class ABPChar_SkagBarfer_C : public ABPChar_SkagShared_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2600(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Cloud_World_PROXY;                                     // 0x2608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Skag_Mouth_Drips_Spit;                                 // 0x2610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_SkagBarfer.BPChar_SkagBarfer_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPChar_SkagBarfer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
