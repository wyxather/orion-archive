#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Cond_Vehicle_EnterFromLeftSide_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cond_Vehicle_EnterFromLeftSide.Cond_Vehicle_EnterFromLeftSide_C
// 0x0000 (0x0088 - 0x0088)
class UCond_Vehicle_EnterFromLeftSide_C : public UGbxCondition_Blueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cond_Vehicle_EnterFromLeftSide.Cond_Vehicle_EnterFromLeftSide_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
