#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_OperativeCharacterComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OperativeCharacterComponent.BP_OperativeCharacterComponent_C
// 0x0008 (0x0318 - 0x0310)
class UBP_OperativeCharacterComponent_C : public UOperativeCharacterComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OperativeCharacterComponent.BP_OperativeCharacterComponent_C");
		return ptr;
	}


	void SetOperativeDeviceVisible(bool* bVisible);
	void ExecuteUbergraph_BP_OperativeCharacterComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
