#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TedioreTurret_SpiderMind_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C
// 0x0013 (0x2420 - 0x240D)
class ABPChar_TedioreTurret_SpiderMind_C : public ABPChar_TedioreTurret_PS_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x240D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2410(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mind;                                                     // 0x2418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void InitializeWeapon();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void ExecuteUbergraph_BPChar_TedioreTurret_SpiderMind(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
