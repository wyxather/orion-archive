// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_BookPages_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_BookPages.Widget_BookPages_C.SetPageFont
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAdvTextBlock**          Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo*         Font                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWidget_BookPages_C::SetPageFont(class UAdvTextBlock** Text, struct FSlateFontInfo* Font)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BookPages.Widget_BookPages_C.SetPageFont");

	UWidget_BookPages_C_SetPageFont_Params params;
	params.Text = Text;
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BookPages.Widget_BookPages_C.GetDisplayPage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           PageID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBorder*                 Page_Image                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAdvTextBlock*           Text_Block                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BookPages_C::GetDisplayPage(int* PageID, class UBorder** Page_Image, class UAdvTextBlock** Text_Block)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BookPages.Widget_BookPages_C.GetDisplayPage");

	UWidget_BookPages_C_GetDisplayPage_Params params;
	params.PageID = PageID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Page_Image != nullptr)
		*Page_Image = params.Page_Image;
	if (Text_Block != nullptr)
		*Text_Block = params.Text_Block;
}


// Function Widget_BookPages.Widget_BookPages_C.SetPage
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Page_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBookPage*              Page_Data                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_BookPages_C::SetPage(int* Page_ID, struct FBookPage* Page_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BookPages.Widget_BookPages_C.SetPage");

	UWidget_BookPages_C_SetPage_Params params;
	params.Page_ID = Page_ID;
	params.Page_Data = Page_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BookPages.Widget_BookPages_C.Set Font
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo*         Font                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWidget_BookPages_C::Set_Font(struct FSlateFontInfo* Font)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BookPages.Widget_BookPages_C.Set Font");

	UWidget_BookPages_C_Set_Font_Params params;
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BookPages.Widget_BookPages_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_BookPages_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BookPages.Widget_BookPages_C.Construct");

	UWidget_BookPages_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BookPages.Widget_BookPages_C.ExecuteUbergraph_Widget_BookPages
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BookPages_C::ExecuteUbergraph_Widget_BookPages(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BookPages.Widget_BookPages_C.ExecuteUbergraph_Widget_BookPages");

	UWidget_BookPages_C_ExecuteUbergraph_Widget_BookPages_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
