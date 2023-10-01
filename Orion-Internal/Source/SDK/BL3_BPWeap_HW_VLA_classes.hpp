#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_HW_VLA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_HW_VLA.BPWeap_HW_VLA_C
// 0x0008 (0x09E0 - 0x09D8)
class ABPWeap_HW_VLA_C : public ABPWeap_VLA_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_HW_VLA.BPWeap_HW_VLA_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void LoadShells();
	void ShellsLoaded();
	void ExecuteUbergraph_BPWeap_HW_VLA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
