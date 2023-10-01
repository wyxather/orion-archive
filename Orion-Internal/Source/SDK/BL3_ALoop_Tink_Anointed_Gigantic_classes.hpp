#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALoop_Tink_Anointed_Gigantic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALoop_Tink_Anointed_Gigantic.ALoop_Tink_Anointed_Gigantic_C
// 0x0020 (0x03D8 - 0x03B8)
class UALoop_Tink_Anointed_Gigantic_C : public UGbxAction_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AGbxCharacter*                               MyCharacter;                                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      MyTarget;                                                 // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALoop_Tink_Anointed_Gigantic.ALoop_Tink_Anointed_Gigantic_C");
		return ptr;
	}


	void Throw_R();
	void Throw_L();
	void OnBegin(class AActor** Actor);
	void ExitStart();
	void ExecuteUbergraph_ALoop_Tink_Anointed_Gigantic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
