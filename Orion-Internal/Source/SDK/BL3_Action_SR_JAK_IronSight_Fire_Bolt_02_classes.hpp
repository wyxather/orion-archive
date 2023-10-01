#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SR_JAK_IronSight_Fire_Bolt_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SR_JAK_IronSight_Fire_Bolt_02.Action_SR_JAK_IronSight_Fire_Bolt_02_C
// 0x0008 (0x0220 - 0x0218)
class UAction_SR_JAK_IronSight_Fire_Bolt_02_C : public UAction_SR_JAK_IronSight_Fire_Bolt_01_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_JAK_IronSight_Fire_Bolt_02.Action_SR_JAK_IronSight_Fire_Bolt_02_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_SR_JAK_IronSight_Fire_Bolt_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
