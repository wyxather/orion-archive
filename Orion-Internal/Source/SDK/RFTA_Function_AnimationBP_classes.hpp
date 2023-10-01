#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Function_AnimationBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Function_AnimationBP.Function_AnimationBP_C
// 0x0000 (0x0028 - 0x0028)
class UFunction_AnimationBP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Function_AnimationBP.Function_AnimationBP_C");
		return ptr;
	}


	int STATIC_Get_Number_Of_Player(class UObject** WorldContextObject, class UObject** __WorldContext);
	bool STATIC_Check_For_No_Look_Poses(class ACharacterGunfire** Target, struct FName* Tag, class UObject** __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
