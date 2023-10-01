#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_EventTreeNode_ShowTutorial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTreeNode_ShowTutorial.EventTreeNode_ShowTutorial_C
// 0x0010 (0x0078 - 0x0068)
class UEventTreeNode_ShowTutorial_C : public UEventTreeNode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Tutorial;                                                 // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EventTreeNode_ShowTutorial.EventTreeNode_ShowTutorial_C");
		return ptr;
	}


	class FString GetEditorLabel();
	void Begin(class UEventTreeComponent** Component);
	void ExecuteUbergraph_EventTreeNode_ShowTutorial(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
