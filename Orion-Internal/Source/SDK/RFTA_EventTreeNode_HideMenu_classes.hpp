#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_EventTreeNode_HideMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTreeNode_HideMenu.EventTreeNode_HideMenu_C
// 0x0008 (0x0070 - 0x0068)
class UEventTreeNode_HideMenu_C : public UEventTreeNode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EventTreeNode_HideMenu.EventTreeNode_HideMenu_C");
		return ptr;
	}


	class FString GetEditorLabel();
	void Begin(class UEventTreeComponent** Component);
	void ExecuteUbergraph_EventTreeNode_HideMenu(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
