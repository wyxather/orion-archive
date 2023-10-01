#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_PCTextChatWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_PCTextChatWidget.BPWidget_PCTextChatWidget_C
// 0x0000 (0x06E0 - 0x06E0)
class UBPWidget_PCTextChatWidget_C : public UGFxPCTextChatWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_PCTextChatWidget.BPWidget_PCTextChatWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
