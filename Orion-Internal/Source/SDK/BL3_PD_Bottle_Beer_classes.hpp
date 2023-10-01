#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Bottle_Beer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PD_Bottle_Beer.PD_Bottle_Beer_C
// 0x0008 (0x0490 - 0x0488)
class APD_Bottle_Beer_C : public ABP_LightDestructible_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0488(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PD_Bottle_Beer.PD_Bottle_Beer_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_5_ComponentFractureSignature__DelegateSignature_PD_Bottle_Beer(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void ExecuteUbergraph_PD_Bottle_Beer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
