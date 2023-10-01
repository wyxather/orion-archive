#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SR_DAL_AutoAime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_SR_DAL_AutoAime.BPWeap_SR_DAL_AutoAime_C
// 0x0000 (0x09D8 - 0x09D8)
class ABPWeap_SR_DAL_AutoAime_C : public ABPWeap_SR_DAL_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SR_DAL_AutoAime.BPWeap_SR_DAL_AutoAime_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
