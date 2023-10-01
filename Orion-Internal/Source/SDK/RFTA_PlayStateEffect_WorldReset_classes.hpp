#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_PlayStateEffect_WorldReset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C
// 0x0001 (0x0031 - 0x0030)
class UPlayStateEffect_WorldReset_C : public UPlayStateEffect
{
public:
	TEnumAsByte<EWorldResetState>                      State;                                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C");
		return ptr;
	}


	bool TickTransition(class UPlayStateComponent** Component, float* DeltaSeconds);
	void Apply(class UPlayStateComponent** Component, class UPlayStateEffect** Previous);
	class FString GetEditorLabel();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
