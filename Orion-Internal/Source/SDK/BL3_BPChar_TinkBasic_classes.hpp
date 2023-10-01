#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TinkBasic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_TinkBasic.BPChar_TinkBasic_C
// 0x000F (0x2430 - 0x2421)
class ABPChar_TinkBasic_C : public ABPChar_Tink_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2428(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_TinkBasic.BPChar_TinkBasic_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPChar_TinkBasic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
