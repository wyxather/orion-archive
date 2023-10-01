#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_Spit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARAnim_Skag_Shared_Spit.ARAnim_Skag_Shared_Spit_C
// 0x0010 (0x0248 - 0x0238)
class UARAnim_Skag_Shared_Spit_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARAnim_Skag_Shared_Spit.ARAnim_Skag_Shared_Spit_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void NotifyState_Spit_Abort();
	void NotifyState_Spit_Begin();
	void NotifyState_Spit_End();
	void ExecuteUbergraph_ARAnim_Skag_Shared_Spit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
