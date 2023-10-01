#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PsychoBadass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PsychoBadass.BPChar_PsychoBadass_C
// 0x0008 (0x23E8 - 0x23E0)
class ABPChar_PsychoBadass_C : public ABPChar_PsychoShared_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x23E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PsychoBadass.BPChar_PsychoBadass_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPChar_PsychoBadass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
