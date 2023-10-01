// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StartingGearCard_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_StartingGearCard.Widget_StartingGearCard_C.SetInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo*           Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_StartingGearCard_C::SetInfo(struct FInspectInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StartingGearCard.Widget_StartingGearCard_C.SetInfo");

	UWidget_StartingGearCard_C_SetInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
