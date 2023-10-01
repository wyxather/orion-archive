#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Combat_PipeValve_Normal_Small_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Combat_PipeValve_Normal_Small.IO_Combat_PipeValve_Normal_Small_C
// 0x0000 (0x0675 - 0x0675)
class AIO_Combat_PipeValve_Normal_Small_C : public AIO_Combat_PipeValve_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Combat_PipeValve_Normal_Small.IO_Combat_PipeValve_Normal_Small_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
