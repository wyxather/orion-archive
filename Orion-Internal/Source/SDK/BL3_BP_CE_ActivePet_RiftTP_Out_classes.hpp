#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_ActivePet_RiftTP_Out_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CE_ActivePet_RiftTP_Out.BP_CE_ActivePet_RiftTP_Out_C
// 0x0008 (0x0180 - 0x0178)
class UBP_CE_ActivePet_RiftTP_Out_C : public UOakAction_CoordinatedEffect_ActionAbility
{
public:
	class AOakCharacter*                               OakCharacter;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_ActivePet_RiftTP_Out.BP_CE_ActivePet_RiftTP_Out_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
