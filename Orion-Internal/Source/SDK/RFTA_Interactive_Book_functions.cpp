// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Book_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interactive_Book.Interactive_Book_C.CheckReadNotify
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBookPage*              Page                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AInteractive_Book_C::CheckReadNotify(struct FBookPage* Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.CheckReadNotify");

	AInteractive_Book_C_CheckReadNotify_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.UpdatePageTurnUI
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::UpdatePageTurnUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.UpdatePageTurnUI");

	AInteractive_Book_C_UpdatePageTurnUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.GetLore
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ALoreItem*               Lore                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Book_C::GetLore(class ALoreItem** Lore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.GetLore");

	AInteractive_Book_C_GetLore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lore != nullptr)
		*Lore = params.Lore;
}


// Function Interactive_Book.Interactive_Book_C.OnRep_Page Turns
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::OnRep_Page_Turns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.OnRep_Page Turns");

	AInteractive_Book_C_OnRep_Page_Turns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.Update All Materials
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::Update_All_Materials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Update All Materials");

	AInteractive_Book_C_Update_All_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.Update Page Material
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Page_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Book_C::Update_Page_Material(int* Page_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Update Page Material");

	AInteractive_Book_C_Update_Page_Material_Params params;
	params.Page_ID = Page_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.Update Material
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Material_Element_Index         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture**               Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Book_C::Update_Material(int* Material_Element_Index, bool* Activate, class UTexture** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Update Material");

	AInteractive_Book_C_Update_Material_Params params;
	params.Material_Element_Index = Material_Element_Index;
	params.Activate = Activate;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.Get Current Page Index
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           Page_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Page_Index                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Book_C::Get_Current_Page_Index(int* Page_ID, bool* Forward, int* Page_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Get Current Page Index");

	AInteractive_Book_C_Get_Current_Page_Index_Params params;
	params.Page_ID = Page_ID;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Page_Index != nullptr)
		*Page_Index = params.Page_Index;
}


// Function Interactive_Book.Interactive_Book_C.Assign All Render Textures
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Book_C::Assign_All_Render_Textures(bool* Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Assign All Render Textures");

	AInteractive_Book_C_Assign_All_Render_Textures_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.GetBookWidget
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget_BookPages_C*     Book_Widget                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Book_C::GetBookWidget(class UWidget_BookPages_C** Book_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.GetBookWidget");

	AInteractive_Book_C_GetBookWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Book_Widget != nullptr)
		*Book_Widget = params.Book_Widget;
}


// Function Interactive_Book.Interactive_Book_C.Update Pages
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Book_C::Update_Pages(bool* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Update Pages");

	AInteractive_Book_C_Update_Pages_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.Assign Render Texture
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Material_Element_Index         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Book_C::Assign_Render_Texture(int* Material_Element_Index, bool* Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Assign Render Texture");

	AInteractive_Book_C_Assign_Render_Texture_Params params;
	params.Material_Element_Index = Material_Element_Index;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.PrevPage
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::PrevPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.PrevPage");

	AInteractive_Book_C_PrevPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.NextPage
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.NextPage");

	AInteractive_Book_C_NextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AInteractive_Book_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.ReceiveBeginPlay");

	AInteractive_Book_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.Single Page Ready
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::Single_Page_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Single Page Ready");

	AInteractive_Book_C_Single_Page_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.Page 4 Set
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::Page_4_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Page 4 Set");

	AInteractive_Book_C_Page_4_Set_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.Update Pages Delayed
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_Book_C::Update_Pages_Delayed(bool* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Update Pages Delayed");

	AInteractive_Book_C_Update_Pages_Delayed_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.OnNextDialog
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::OnNextDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.OnNextDialog");

	AInteractive_Book_C_OnNextDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.OnPrevDialog
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::OnPrevDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.OnPrevDialog");

	AInteractive_Book_C_OnPrevDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.InitLore
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::InitLore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.InitLore");

	AInteractive_Book_C_InitLore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.OnHUDInit
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::OnHUDInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.OnHUDInit");

	AInteractive_Book_C_OnHUDInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.ServerBeginInspect
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::ServerBeginInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.ServerBeginInspect");

	AInteractive_Book_C_ServerBeginInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.OnHUDUpdate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::OnHUDUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.OnHUDUpdate");

	AInteractive_Book_C_OnHUDUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.CacheUIPage
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentPage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Book_C::CacheUIPage(int* CurrentPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.CacheUIPage");

	AInteractive_Book_C_CacheUIPage_Params params;
	params.CurrentPage = CurrentPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.OnInspectEnd
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_Book_C::OnInspectEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.OnInspectEnd");

	AInteractive_Book_C_OnInspectEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_Book.Interactive_Book_C.ExecuteUbergraph_Interactive_Book
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_Book_C::ExecuteUbergraph_Interactive_Book(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.ExecuteUbergraph_Interactive_Book");

	AInteractive_Book_C_ExecuteUbergraph_Interactive_Book_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
