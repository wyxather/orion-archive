#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_RedChest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_Lootable_RedChest.BPIO_Lootable_RedChest_C
// 0x0014 (0x08C8 - 0x08B4)
class ABPIO_Lootable_RedChest_C : public ABPIO_Lootable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B8(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      RedChestChallenge;                                        // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_Lootable_RedChest.BPIO_Lootable_RedChest_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__UsableComponent_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_RedChest(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void ExecuteUbergraph_BPIO_Lootable_RedChest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
