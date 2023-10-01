#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetSkag_Fidget_Barking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PetSkag_Fidget_Barking.Action_PetSkag_Fidget_Barking_C
// 0x0008 (0x0220 - 0x0218)
class UAction_PetSkag_Fidget_Barking_C : public UOakAction_Anim
{
public:
	class AActor*                                      Actor;                                                    // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetSkag_Fidget_Barking.Action_PetSkag_Fidget_Barking_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
