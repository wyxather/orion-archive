#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Merchant_Ward13_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Merchant_Ward13.Character_Merchant_Ward13_C
// 0x0017 (0x0D20 - 0x0D09)
class ACharacter_Merchant_Ward13_C : public ACharacter_Merchant_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D09(0x0007) MISSED OFFSET
	class UDialogCameraComponent*                      Cam_Reggie_Wide_Anim;                                     // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDialogCameraComponent*                      Cam_Reggie_Wide;                                          // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Merchant_Ward13.Character_Merchant_Ward13_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
