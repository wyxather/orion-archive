// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MovieSceneTracks_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin");

	UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneSkeletalAnimationSection.GetAvailableSlotNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           OutSlotNames                   (Parm, OutParm, ZeroConstructor)

void UMovieSceneSkeletalAnimationSection::GetAvailableSlotNames(TArray<struct FName>* OutSlotNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneSkeletalAnimationSection.GetAvailableSlotNames");

	UMovieSceneSkeletalAnimationSection_GetAvailableSlotNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSlotNames != nullptr)
		*OutSlotNames = params.OutSlotNames;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
