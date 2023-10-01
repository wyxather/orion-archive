#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPClass_GrenadeMod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPClass_GrenadeMod.BPClass_GrenadeMod_C
// 0x0024 (0x05E4 - 0x05C0)
class ABPClass_GrenadeMod_C : public AGrenadeMod
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C0(0x0008) (Transient, DuplicateTransient)
	float                                              IgnoreDeliveryName;                                       // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              ObjectList;                                               // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              IgnoreManufacturerDescription;                            // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPClass_GrenadeMod.BPClass_GrenadeMod_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPClass_GrenadeMod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
