#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Self_Revive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Self_Revive.Action_Self_Revive_C
// 0x0008 (0x0230 - 0x0228)
class UAction_Self_Revive_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Self_Revive.Action_Self_Revive_C");
		return ptr;
	}


	void Set_Dragon_Heart_Quantity(class UObject** Object);
	void OnActionStart();
	void ExecuteUbergraph_Action_Self_Revive(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
