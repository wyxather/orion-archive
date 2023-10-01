#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_Tediore_FriendZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AITree_Tediore_FriendZone.AITree_Tediore_FriendZone_C
// 0x0010 (0x0180 - 0x0170)
class UAITree_Tediore_FriendZone_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)
	class UWwiseEvent*                                 Audio_TargetFound;                                        // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AITree_Tediore_FriendZone.AITree_Tediore_FriendZone_C");
		return ptr;
	}


	void ExecuteUbergraph_AITree_Tediore_FriendZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
