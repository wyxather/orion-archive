#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_CanDeployLastVehicleLoadout_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_CanDeployLastVehicleLoadout.Condition_CanDeployLastVehicleLoadout_C
// 0x0001 (0x0089 - 0x0088)
class UCondition_CanDeployLastVehicleLoadout_C : public UGbxCondition_Blueprint
{
public:
	EInteractiveObjectState                            Object_State;                                             // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_CanDeployLastVehicleLoadout.Condition_CanDeployLastVehicleLoadout_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
