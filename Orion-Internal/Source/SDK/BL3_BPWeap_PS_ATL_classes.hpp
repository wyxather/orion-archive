#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_ATL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_PS_ATL.BPWeap_PS_ATL_C
// 0x000C (0x0A70 - 0x0A64)
class ABPWeap_PS_ATL_C : public ABPWeap_ATL_BaseWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A64(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A68(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_PS_ATL.BPWeap_PS_ATL_C");
		return ptr;
	}


	void ShowMag03();
	void HideMag03();
	void ShowMag01();
	void HideMag01();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HideMags();
	void ExecuteUbergraph_BPWeap_PS_ATL(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
