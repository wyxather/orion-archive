#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_HW_ATL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_HW_ATL.BPWeap_HW_ATL_C
// 0x000C (0x0A70 - 0x0A64)
class ABPWeap_HW_ATL_C : public ABPWeap_ATL_BaseWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A64(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A68(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_HW_ATL.BPWeap_HW_ATL_C");
		return ptr;
	}


	void UserConstructionScript();
	void Hide_Pod();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPWeap_HW_ATL(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
