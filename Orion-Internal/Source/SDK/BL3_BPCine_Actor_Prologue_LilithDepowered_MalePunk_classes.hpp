#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCine_Actor_Prologue_LilithDepowered_MalePunk_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCine_Actor_Prologue_LilithDepowered_MalePunk.BPCine_Actor_Prologue_LilithDepowered_MalePunk_C
// 0x0008 (0x0518 - 0x0510)
class ABPCine_Actor_Prologue_LilithDepowered_MalePunk_C : public ABPCine_Actor_Parent_C
{
public:
	class USkeletalMeshComponent*                      SK_SM_HYP;                                                // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCine_Actor_Prologue_LilithDepowered_MalePunk.BPCine_Actor_Prologue_LilithDepowered_MalePunk_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
