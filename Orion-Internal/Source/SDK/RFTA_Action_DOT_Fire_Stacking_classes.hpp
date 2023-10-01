#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_DOT_Fire_Stacking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C
// 0x000C (0x0308 - 0x02FC)
class UAction_DOT_Fire_Stacking_C : public UAction_DOT_Fire_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C");
		return ptr;
	}


	void DetermineRollDelta();
	void OnReapplyBuff();
	void OnActionStart();
	void ExecuteUbergraph_Action_DOT_Fire_Stacking(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
