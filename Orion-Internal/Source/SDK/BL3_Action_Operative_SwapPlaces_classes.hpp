#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_SwapPlaces_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Operative_SwapPlaces.Action_Operative_SwapPlaces_C
// 0x0008 (0x0288 - 0x0280)
class UAction_Operative_SwapPlaces_C : public UAction_Operative_Digiclone_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_SwapPlaces.Action_Operative_SwapPlaces_C");
		return ptr;
	}


	void Notify_SwapPlaces();
	void ExecuteUbergraph_Action_Operative_SwapPlaces(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
