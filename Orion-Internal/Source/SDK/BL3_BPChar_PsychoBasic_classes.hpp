#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PsychoBasic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PsychoBasic.BPChar_PsychoBasic_C
// 0x0008 (0x23E8 - 0x23E0)
class ABPChar_PsychoBasic_C : public ABPChar_PsychoShared_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x23E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PsychoBasic.BPChar_PsychoBasic_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPChar_PsychoBasic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
