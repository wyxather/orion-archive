#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Claptrap_TalkingLoop_L_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Claptrap_TalkingLoop_L.A_Claptrap_TalkingLoop_L_C
// 0x0008 (0x03C0 - 0x03B8)
class UA_Claptrap_TalkingLoop_L_C : public UGbxAction_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Claptrap_TalkingLoop_L.A_Claptrap_TalkingLoop_L_C");
		return ptr;
	}


	void OnLoop(class AActor** Actor);
	void ExecuteUbergraph_A_Claptrap_TalkingLoop_L(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
