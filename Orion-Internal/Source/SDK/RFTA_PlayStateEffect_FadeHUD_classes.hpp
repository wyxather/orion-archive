#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_PlayStateEffect_FadeHUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayStateEffect_FadeHUD.PlayStateEffect_FadeHUD_C
// 0x0001 (0x0031 - 0x0030)
class UPlayStateEffect_FadeHUD_C : public UPlayStateEffect
{
public:
	TEnumAsByte<EHUDFadeDirection>                     FadeDirection;                                            // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayStateEffect_FadeHUD.PlayStateEffect_FadeHUD_C");
		return ptr;
	}


	class FString GetEditorLabel();
	void Apply(class UPlayStateComponent** Component, class UPlayStateEffect** Previous);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
