#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxProbesCore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxProbesCore.GbxProbeInterface
// 0x0000 (0x0028 - 0x0028)
class UGbxProbeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxProbesCore.GbxProbeInterface");
		return ptr;
	}


	void GetGbxProbeId(struct FGbxProbeId* OutId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
