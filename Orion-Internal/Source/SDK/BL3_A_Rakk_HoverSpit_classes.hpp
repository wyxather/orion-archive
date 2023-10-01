#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_HoverSpit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Rakk_HoverSpit.A_Rakk_HoverSpit_C
// 0x0020 (0x0238 - 0x0218)
class UA_Rakk_HoverSpit_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EOakElementalType                                  ElementalType;                                            // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class APawn*                                       MyPawn;                                                   // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Rakk_HoverSpit.A_Rakk_HoverSpit_C");
		return ptr;
	}


	void GbxAsyncRequest_Spawned_085CF53C4FE4574C52F752A71551CFCD(class AActor* Actor, int InstanceIndex);
	void OnBegin(class AActor** Actor);
	void Spit();
	void ExecuteUbergraph_A_Rakk_HoverSpit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
