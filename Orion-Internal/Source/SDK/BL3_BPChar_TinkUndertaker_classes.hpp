#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TinkUndertaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_TinkUndertaker.BPChar_TinkUndertaker_C
// 0x0028 (0x2458 - 0x2430)
class ABPChar_TinkUndertaker_C : public ABPChar_TinkBasic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2430(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Shovel;                                                // 0x2438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Hat_Badge;                                                // 0x2440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TopHat;                                                   // 0x2448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_GraveStone_Small_V4;                                   // 0x2450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_TinkUndertaker.BPChar_TinkUndertaker_C");
		return ptr;
	}


	void UserConstructionScript();
	void Tink_SetWantsToFly();
	void Tink_SetWantsToLand();
	void ExecuteUbergraph_BPChar_TinkUndertaker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
