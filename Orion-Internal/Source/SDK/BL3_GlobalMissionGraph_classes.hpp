#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GlobalMissionGraph_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GlobalMissionGraph.GlobalMissionGraph_C
// 0x0008 (0x0080 - 0x0078)
class UGlobalMissionGraph_C : public UOakGlobalMissionGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GlobalMissionGraph.GlobalMissionGraph_C");
		return ptr;
	}


	void _Children_of_the_Vault_(void* Unlocks, void* Next_Mission);
	void _Childhood_s_End_(void* Unlocks, void* Next_Mission);
	void _Slaughterstar_3000_(void* Unlocks, void* Next_Mission);
	void _Cold_as_the_Grave_(void* Unlocks, void* Next_Mission);
	void _From_the_Ground_Up_(void* Unlocks, void* Next_Mission);
	void _Taking_Flight_(void* Unlocks, void* Next_Mission);
	void _Sanctuary_(void* Unlocks, void* Next_Mission);
	void _The_First_Vault_Hunter_(void* Unlocks, void* Next_Mission);
	void _In_the_Shadow_of_Starlight_(void* Unlocks, void* Next_Mission);
	void _Divine_Retribution_(void* Unlocks, void* Next_Mission);
	void _Buff_Film_Buff_(void* Unlocks, void* Next_Mission);
	void _ECHOnet_Neutrality_(void* Unlocks, void* Next_Mission);
	void _Let_s_Get_It_Vaughn_(void* Unlocks, void* Next_Mission);
	void _Technical_NOGout_(void* Unlocks, void* Next_Mission);
	void _Rise_and_Grind_(void* Unlocks, void* Next_Mission);
	void _Baby_Dancer_(void* Unlocks, void* Next_Mission);
	void _Life_of_the_Party_(void* Unlocks, void* Next_Mission);
	void _Bad_Vibrations_(void* Unlocks, void* Next_Mission);
	void _Trial_of_Instinct_(void* Unlocks, void* Next_Mission);
	void _Trial_of_Discipline_(void* Unlocks, void* Next_Mission);
	void _Trial_of_Supremacy_(void* Unlocks, void* Next_Mission);
	void _Homeopathological_(void* Unlocks, void* Next_Mission);
	void _Healers_and_Dealers_(void* Unlocks, void* Next_Mission);
	void _Sheega_s_All_That_(void* Unlocks, void* Next_Mission);
	void _Wildlife_Conservation_(void* Unlocks, void* Next_Mission);
	void _On_the_Blood_Path_(void* Unlocks, void* Next_Mission);
	void _Fire_in_the_Sky_(void* Unlocks, void* Next_Mission);
	void _Bad_Reception_(void* Unlocks, void* Next_Mission);
	void _Witch_s_Brew_(void* Unlocks, void* Next_Mission);
	void _Just_Desserts_(void* Unlocks, void* Next_Mission);
	void _The_Guns_of_Reliance_(void* Unlocks, void* Next_Mission);
	void _Dynasty_Diner_(void* Unlocks, void* Next_Mission);
	void _The_Slaughter_Shaft_(void* Unlocks, void* Next_Mission);
	void _Malevolent_Practice_(void* Unlocks, void* Next_Mission);
	void _Ratch_d_Up_(void* Unlocks, void* Next_Mission);
	void _Powerful_Connections_(void* Unlocks, void* Next_Mission);
	void _Dump_on_Dumptruck_(void* Unlocks, void* Next_Mission);
	void _Under_Taker_(void* Unlocks, void* Next_Mission);
	void _Just_A_Prick_(void* Unlocks, void* Next_Mission);
	void _The_Kevin_Konundrum_(void* Unlocks, void* Next_Mission);
	void _Golden_Calves_(void* Unlocks, void* Next_Mission);
	void _Head_Case_(void* Unlocks, void* Next_Mission);
	void _Discover_the_Trial_of_Survival_(void* Unlocks, void* Next_Mission);
	void _Pandora_s_Next_Top_Mouthpiece_(void* Unlocks, void* Next_Mission);
	void _Discover_the_Trial_of_Cunning_(void* Unlocks, void* Next_Mission);
	void _Discover_the_Trial_of_Discipline_(void* Unlocks, void* Next_Mission);
	void _Discover_the_Trial_of_Instinct_(void* Unlocks, void* Next_Mission);
	void _Capture_the_Frag_(void* Unlocks, void* Next_Mission);
	void _Trial_of_Cunning_(void* Unlocks, void* Next_Mission);
	void _Discover_the_Trial_of_Fervor_(void* Unlocks, void* Next_Mission);
	void _Discover_the_Trial_of_Supremacy_(void* Unlocks, void* Next_Mission);
	void _Kill_Rakkman_(void* Unlocks, void* Next_Mission);
	void _(void* Unlocks, void* Next_Mission);
	void _Kill_Dinklebot_(void* Unlocks, void* Next_Mission);
	void _Kill_Road_Dog_(void* Unlocks, void* Next_Mission);
	void _Kill_Wick_and_Warty_(void* Unlocks, void* Next_Mission);
	void _Kill_IndoTyrant_(void* Unlocks, void* Next_Mission);
	void _Kill_the_Power_Troopers_(void* Unlocks, void* Next_Mission);
	void _Kill_Demoskaggon_(void* Unlocks, void* Next_Mission);
	void _Kill_The_Unstoppable_(void* Unlocks, void* Next_Mission);
	void _Kill_Captain_Thunk_and_Sloth_(void* Unlocks, void* Next_Mission);
	void _Kill_Maxitrillion_(void* Unlocks, void* Next_Mission);
	void _Kill_Borman_Nates_(void* Unlocks, void* Next_Mission);
	void _Trial_of_Fervor_(void* Unlocks, void* Next_Mission);
	void _Boom_Boom_Boomtown_(void* Unlocks, void* Next_Mission);
	void _Swamp_Bro_(void* Unlocks, void* Next_Mission);
	void _Irregular_Customers_(void* Unlocks, void* Next_Mission);
	void _Get_Quick,_Slick_(void* Unlocks, void* Next_Mission);
	void _Raiders_of_the_Lost_Rock_(void* Unlocks, void* Next_Mission);
	void _Cult_Following_(void* Unlocks, void* Next_Mission);
	void _Holy_Spirits_(void* Unlocks, void* Next_Mission);
	void _Opposition_Research_(void* Unlocks, void* Next_Mission);
	void _Cistern_of_Slaughter_(void* Unlocks, void* Next_Mission);
	void _Trial_of_Survival_(void* Unlocks, void* Next_Mission);
	void _The_Demon_in_the_Dark_(void* Unlocks, void* Next_Mission);
	void _Cannonization_(void* Unlocks, void* Next_Mission);
	void _It_s_Alive_(void* Unlocks, void* Next_Mission);
	void _The_Feeble_and_the_Furious_(void* Unlocks, void* Next_Mission);
	void _Dynasty_Dash__Pandora_(void* Unlocks, void* Next_Mission);
	void _Dynasty_Dash__Eden_6_(void* Unlocks, void* Next_Mission);
	void _Transaction_Packed_(void* Unlocks, void* Next_Mission);
	void _Kill_Killavolt_(void* Unlocks, void* Next_Mission);
	void _Rumble_In_The_Jungle_(void* Unlocks, void* Next_Mission);
	void _Proof_of_Wife_(void* Unlocks, void* Next_Mission);
	void _Porta_Prison_(void* Unlocks, void* Next_Mission);
	void _The_Homestead__Part_3__(void* Unlocks, void* Next_Mission);
	void _The_Homestead__Part_2__(void* Unlocks, void* Next_Mission);
	void _The_Homestead_(void* Unlocks, void* Next_Mission);
	void _Going_Rogue_(void* Unlocks, void* Next_Mission);
	void _Footsteps_of_Giants_(void* Unlocks, void* Next_Mission);
	void _The_Great_Vault_(void* Unlocks, void* Next_Mission);
	void _Blood_Drive_(void* Unlocks, void* Next_Mission);
	void _Angels_and_Speed_Demons_(void* Unlocks, void* Next_Mission);
	void _The_Family_Jewel_(void* Unlocks, void* Next_Mission);
	void _Beneath_the_Meridian_(void* Unlocks, void* Next_Mission);
	void _Lair_of_the_Harpy_(void* Unlocks, void* Next_Mission);
	void _Hammerlocked_(void* Unlocks, void* Next_Mission);
	void _Space_Laser_Tag_(void* Unlocks, void* Next_Mission);
	void _Atlas,_At_Last_(void* Unlocks, void* Next_Mission);
	void _Sell_Out_(void* Unlocks, void* Next_Mission);
	void _Sacked_(void* Unlocks, void* Next_Mission);
	void _Invasion_of_Privacy_(void* Unlocks, void* Next_Mission);
	void _Maliwannabees_(void* Unlocks, void* Next_Mission);
	void _The_Impending_Storm_(void* Unlocks, void* Next_Mission);
	void _Skag_Dog_Days_(void* Unlocks, void* Next_Mission);
	void _Hostile_Takeover_(void* Unlocks, void* Next_Mission);
	void _Dynasty_Dash__Devil_s_Razor_(void* Unlocks, void* Next_Mission);
	void _Dynasty_Dash__Floodmoor_Basin_(void* Unlocks, void* Next_Mission);
	void _Kill_Red_Jabber_(void* Unlocks, void* Next_Mission);
	void _Kill_the_Grogans_and_Their_Mother_(void* Unlocks, void* Next_Mission);
	void _Don_t_Truck_with_Eden_6_(void* Unlocks, void* Next_Mission);
	void _Kill_Tarantella_(void* Unlocks, void* Next_Mission);
	void _Welcome_to_Slaughterstar_3000_(void* Unlocks, void* Next_Mission);
	void _Kill_Urist_McEnforcer_(void* Unlocks, void* Next_Mission);
	void ExecuteUbergraph_GlobalMissionGraph(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
