#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagBadass_Howl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_SkagBadass_Howl.A_SkagBadass_Howl_C
// 0x0061 (0x0279 - 0x0218)
class UA_SkagBadass_Howl_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	TMap<EOakElementalType, class UWwiseEvent*>        ElementToWwiseAoECharge;                                  // 0x0220(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      MySelf;                                                   // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EOakElementalType                                  myElement;                                                // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_SkagBadass_Howl.A_SkagBadass_Howl_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void Notify_Transform();
	void Notify_Howl();
	void Notify_Howl_Jump();
	void ExecuteUbergraph_A_SkagBadass_Howl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
