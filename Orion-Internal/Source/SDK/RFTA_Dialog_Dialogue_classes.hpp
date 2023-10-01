#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Dialogue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_Dialogue.Dialog_Dialogue_C
// 0x001B (0x03F8 - 0x03DD)
class ADialog_Dialogue_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      ContextActor;                                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InitiatorActor;                                           // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Dialogue.Dialog_Dialogue_C");
		return ptr;
	}


	void UnbindEvents();
	void EndDialog();
	void SetInitiator(class AActor** Initiator);
	void SetContext(class AActor** Context);
	void OnBeginDialog();
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_Dialogue(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
