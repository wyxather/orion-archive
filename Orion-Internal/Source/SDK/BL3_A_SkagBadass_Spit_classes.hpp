#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagBadass_Spit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_SkagBadass_Spit.A_SkagBadass_Spit_C
// 0x0060 (0x0298 - 0x0238)
class UA_SkagBadass_Spit_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<EOakElementalType, class UWwiseEvent*>        ElementToWwiseBlastFire;                                  // 0x0248(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_SkagBadass_Spit.A_SkagBadass_Spit_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void NotifyState_Spit_Begin();
	void NotifyState_Spit_End();
	void NotifyState_Spit_Abort();
	void ExecuteUbergraph_A_SkagBadass_Spit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
