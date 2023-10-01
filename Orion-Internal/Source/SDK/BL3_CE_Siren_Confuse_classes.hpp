#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CE_Siren_Confuse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Siren_Confuse.CE_Siren_Confuse_C
// 0x0028 (0x0190 - 0x0168)
class UCE_Siren_Confuse_C : public UCE_PlayerShared_Skills_Confuse_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0168(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter_Default*                       ImConfused;                                               // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       Confuse_Duration;                                         // 0x0178(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Siren_Confuse.CE_Siren_Confuse_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_CE_Siren_Confuse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
