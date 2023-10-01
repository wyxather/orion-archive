#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_SR_BipodMode_AccuracyScale_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_SR_BipodMode_AccuracyScale.Init_SR_BipodMode_AccuracyScale_C
// 0x0004 (0x0034 - 0x0030)
class UInit_SR_BipodMode_AccuracyScale_C : public UAttributeInitializer
{
public:
	float                                              AccuracyScale;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_SR_BipodMode_AccuracyScale.Init_SR_BipodMode_AccuracyScale_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
