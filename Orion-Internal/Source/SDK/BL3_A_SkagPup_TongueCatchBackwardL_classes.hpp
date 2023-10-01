#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagPup_TongueCatchBackwardL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_SkagPup_TongueCatchBackwardL.A_SkagPup_TongueCatchBackwardL_C
// 0x0010 (0x0150 - 0x0140)
class UA_SkagPup_TongueCatchBackwardL_C : public UGbxAction_StretchBones
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_SkagPup_TongueCatchBackwardL.A_SkagPup_TongueCatchBackwardL_C");
		return ptr;
	}


	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void Notify_TongueCatch();
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_A_SkagPup_TongueCatchBackwardL(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
