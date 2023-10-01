#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_TinkPsycho_Melee_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARandom_TinkPsycho_Melee.ARandom_TinkPsycho_Melee_C
// 0x0010 (0x0248 - 0x0238)
class UARandom_TinkPsycho_Melee_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_TinkPsycho_Melee.ARandom_TinkPsycho_Melee_C");
		return ptr;
	}


	void Notify_HeadButt_End();
	void Notify_HopMeleeRL_Abort();
	void Notify_HopMeleeRL_Begin();
	void Notify_HopMeleeRL_End();
	void Notify_HeadButt_Abort();
	void Notify_DoubleSwingLR_Abort();
	void Notify_DoubleSwingLR_Begin();
	void Notify_DoubleSwingLR_End();
	void Notify_DoubleSwingRL_Abort();
	void Notify_DoubleSwingRL_Begin();
	void Notify_DoubleSwingRL_End();
	void Notify_HeadButt_Begin();
	void OnBegin(class AActor** Actor);
	void Notfiy_SpinMeleeRL();
	void Notify_SpinMeleeLR_Abort();
	void Notify_SpinMeleeLR_Begin();
	void Notify_SpinMeleeLR_End();
	void ExecuteUbergraph_ARandom_TinkPsycho_Melee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
