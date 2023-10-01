#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Resource_Snow_SilverFragment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Resource_Snow_SilverFragment.Resource_Snow_SilverFragment_C
// 0x0008 (0x04E8 - 0x04E0)
class AResource_Snow_SilverFragment_C : public AItem_Material_Base_C
{
public:
	class URemnantEntitlement_C*                       RemnantEntitlement;                                       // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Resource_Snow_SilverFragment.Resource_Snow_SilverFragment_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
