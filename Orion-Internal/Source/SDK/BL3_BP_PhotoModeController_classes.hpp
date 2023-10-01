#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PhotoModeController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PhotoModeController.BP_PhotoModeController_C
// 0x0008 (0x1778 - 0x1770)
class ABP_PhotoModeController_C : public APhotoModeController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1770(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhotoModeController.BP_PhotoModeController_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnEnterPhotoMode();
	void OnExitPhotoMode();
	void ExecuteUbergraph_BP_PhotoModeController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
