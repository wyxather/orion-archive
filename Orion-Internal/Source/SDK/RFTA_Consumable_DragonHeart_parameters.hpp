#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_DragonHeart_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.IsDeathwish
struct AConsumable_DragonHeart_C_IsDeathwish_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.IsReckless
struct AConsumable_DragonHeart_C_IsReckless_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.DoVolatile
struct AConsumable_DragonHeart_C_DoVolatile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.DoDiscord
struct AConsumable_DragonHeart_C_DoDiscord_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.ShouldDoBenevolence
struct AConsumable_DragonHeart_C_ShouldDoBenevolence_Params
{
	class ACharacterGunfire**                          Ref;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Benevolence;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Range;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.GetCharactersForBenevolence
struct AConsumable_DragonHeart_C_GetCharactersForBenevolence_Params
{
	class ACharacterGunfire**                          Ref;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharacterGunfire*>                   Characters;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.ValidateUse
struct AConsumable_DragonHeart_C_ValidateUse_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.DoBenevolence
struct AConsumable_DragonHeart_C_DoBenevolence_Params
{
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.UseCharge
struct AConsumable_DragonHeart_C_UseCharge_Params
{
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.Use
struct AConsumable_DragonHeart_C_Use_Params
{
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.ClientOnUseDragonHeart
struct AConsumable_DragonHeart_C_ClientOnUseDragonHeart_Params
{
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.OnUseDragonHeart
struct AConsumable_DragonHeart_C_OnUseDragonHeart_Params
{
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.OnActivate
struct AConsumable_DragonHeart_C_OnActivate_Params
{
};

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.ExecuteUbergraph_Consumable_DragonHeart
struct AConsumable_DragonHeart_C_ExecuteUbergraph_Consumable_DragonHeart_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
