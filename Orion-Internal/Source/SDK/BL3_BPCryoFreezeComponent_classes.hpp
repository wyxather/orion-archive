#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCryoFreezeComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCryoFreezeComponent.BPCryoFreezeComponent_C
// 0x0008 (0x0C98 - 0x0C90)
class UBPCryoFreezeComponent_C : public UCryoDestructibleComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C90(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCryoFreezeComponent.BPCryoFreezeComponent_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnGbxComponentFracture_Event_1(const struct FVector& FractureCentroid, const struct FVector& HitDirection, float FracturePercent, bool bSilentFracture);
	void ExecuteUbergraph_BPCryoFreezeComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
