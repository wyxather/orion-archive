#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_Tediore_FriendZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCont_Tediore_FriendZone.BPCont_Tediore_FriendZone_C
// 0x001F (0x0790 - 0x0771)
class ABPCont_Tediore_FriendZone_C : public ABPCont_AI_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0778(0x0008) (Transient, DuplicateTransient)
	bool                                               bCanShoot;                                                // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0781(0x0007) MISSED OFFSET
	struct FName                                       bCanWalk;                                                 // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCont_Tediore_FriendZone.BPCont_Tediore_FriendZone_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret(class UTargetingComponent* TargetingComponent);
	void ExecuteUbergraph_BPCont_Tediore_FriendZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
