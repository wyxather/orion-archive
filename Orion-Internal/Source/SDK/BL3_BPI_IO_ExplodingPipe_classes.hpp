#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_IO_ExplodingPipe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_IO_ExplodingPipe_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C");
		return ptr;
	}


	void GetPipeFlowState(bool* HasFlow);
	void GetPipeDestroyedState(bool* Destroyed);
	void SetPipeState(TEnumAsByte<Enum_IO_ExplodingPipe_DestroyedState> PipeState);
	void SetPipeFlowState(bool HasFlow);
	void DestroyPipe();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
