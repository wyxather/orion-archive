#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SG_MAL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_SG_MAL.BPWeap_SG_MAL_C
// 0x0008 (0x0A50 - 0x0A48)
class ABPWeap_SG_MAL_C : public ABPWeap_MAL_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A48(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SG_MAL.BPWeap_SG_MAL_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPWeap_SG_MAL(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
