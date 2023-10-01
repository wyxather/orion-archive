#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Rakk_SwoopSpit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Rakk_SwoopSpit.A_Rakk_SwoopSpit_C
// 0x0019 (0x03D1 - 0x03B8)
class UA_Rakk_SwoopSpit_C : public UGbxAction_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       MyPawn;                                                   // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EOakElementalType                                  ElementalType;                                            // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Rakk_SwoopSpit.A_Rakk_SwoopSpit_C");
		return ptr;
	}


	void GbxAsyncRequest_Spawned_55C99C85471F1FD9B3A0998ED1B1A065(class AActor* Actor, int InstanceIndex);
	void OnBegin(class AActor** Actor);
	void Spit();
	void ExecuteUbergraph_A_Rakk_SwoopSpit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
