#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_COV_CardboardBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_Lootable_COV_CardboardBox.BPIO_Lootable_COV_CardboardBox_C
// 0x000D (0x08C1 - 0x08B4)
class ABPIO_Lootable_COV_CardboardBox_C : public ABPIO_Lootable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B8(0x0008) (Transient, DuplicateTransient)
	bool                                               Damaged;                                                  // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_Lootable_COV_CardboardBox.BPIO_Lootable_COV_CardboardBox_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnEnabling();
	void ExecuteUbergraph_BPIO_Lootable_COV_CardboardBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
