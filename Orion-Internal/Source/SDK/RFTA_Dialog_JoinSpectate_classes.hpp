#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_JoinSpectate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_JoinSpectate.Dialog_JoinSpectate_C
// 0x000F (0x03F8 - 0x03E9)
class ADialog_JoinSpectate_C : public ADialog_Death_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_JoinSpectate.Dialog_JoinSpectate_C");
		return ptr;
	}


	void OnInvalidTarget();
	void OnValidTarget();
	void EvemtClosedCharacterSelect(struct FName* Result);
	void PostTravel();
	void ExecuteUbergraph_Dialog_JoinSpectate(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
