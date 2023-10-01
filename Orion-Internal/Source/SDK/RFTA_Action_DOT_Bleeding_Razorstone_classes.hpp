#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_DOT_Bleeding_Razorstone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C
// 0x0008 (0x0308 - 0x0300)
class UAction_DOT_Bleeding_Razorstone_C : public UAction_DOT_Bleeding_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C");
		return ptr;
	}


	void OnReapplyBuff();
	void OnActionStart();
	void ExecuteUbergraph_Action_DOT_Bleeding_Razorstone(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
