// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_ElementalProjectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_ElementalProjectile.BPI_ElementalProjectile_C.InitializeElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              ElementType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_ElementalProjectile_C::InitializeElement(EOakElementalType ElementType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ElementalProjectile.BPI_ElementalProjectile_C.InitializeElement");

	UBPI_ElementalProjectile_C_InitializeElement_Params params;
	params.ElementType = ElementType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
