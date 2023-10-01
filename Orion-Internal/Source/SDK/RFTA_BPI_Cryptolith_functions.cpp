// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BPI_Cryptolith_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Cryptolith.BPI_Cryptolith_C.SetPhase
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewPhase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPI_Cryptolith_C::SetPhase(int* NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Cryptolith.BPI_Cryptolith_C.SetPhase");

	UBPI_Cryptolith_C_SetPhase_Params params;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Cryptolith.BPI_Cryptolith_C.GetPhase
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPI_Cryptolith_C::GetPhase(int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Cryptolith.BPI_Cryptolith_C.GetPhase");

	UBPI_Cryptolith_C_GetPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
