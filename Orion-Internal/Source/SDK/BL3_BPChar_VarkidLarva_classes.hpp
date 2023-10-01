#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_VarkidLarva_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_VarkidLarva.BPChar_VarkidLarva_C
// 0x000F (0x25D0 - 0x25C1)
class ABPChar_VarkidLarva_C : public ABPChar_VarkidShared_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x25C1(0x0007) MISSED OFFSET
	class UFoleyMainComponent*                         FoleyMain;                                                // 0x25C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_VarkidLarva.BPChar_VarkidLarva_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
