#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Death_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_Death.Dialog_Death_C
// 0x000C (0x03E9 - 0x03DD)
class ADialog_Death_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Spectating;                                               // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Death.Dialog_Death_C");
		return ptr;
	}


	void fade(EFadeDirection* Direction, bool* Immediate);
	void BeginSpectating();
	void SetContext(class AActor** Context);
	void PostTravel();
	void OnInvalidTarget();
	void OnValidTarget();
	void EnsureValidTarget();
	void OnPushDialog(class AUIActor** Next);
	void OnPopDialog(class AUIActor** Prev);
	void ExecuteUbergraph_Dialog_Death(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
