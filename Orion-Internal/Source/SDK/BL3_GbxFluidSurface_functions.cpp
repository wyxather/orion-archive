// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxFluidSurface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxFluidSurface.FluidSurface.PerturbSurface
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Force                          (Parm, ZeroConstructor, IsPlainOldData)

void AFluidSurface::PerturbSurface(const struct FVector& Position, float Radius, float Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxFluidSurface.FluidSurface.PerturbSurface");

	AFluidSurface_PerturbSurface_Params params;
	params.Position = Position;
	params.Radius = Radius;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
