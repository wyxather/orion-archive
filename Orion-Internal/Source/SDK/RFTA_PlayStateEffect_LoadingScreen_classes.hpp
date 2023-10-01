#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_PlayStateEffect_LoadingScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C
// 0x0001 (0x0031 - 0x0030)
class UPlayStateEffect_LoadingScreen_C : public UPlayStateEffect
{
public:
	bool                                               Show_Loading_Screen;                                      // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C");
		return ptr;
	}


	bool TickTransition(class UPlayStateComponent** Component, float* DeltaSeconds);
	class FString GetEditorLabel();
	void Apply(class UPlayStateComponent** Component, class UPlayStateEffect** Previous);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
