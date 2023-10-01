#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Basic.hpp"
#include "RFTA_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GunfireTechRequirements.ERevokeType
enum class ERevokeType : uint8_t
{
	Default                        = 0,
	Remove                         = 1,
	Disable                        = 2,
	ERevokeType_MAX                = 3
};


// Enum GunfireTechRequirements.EAlternateLoginType
enum class EAlternateLoginType : uint8_t
{
	DEFAULT                        = 0,
	EPIC_LOGIN_EXTERNAL            = 1,
	EPIC_LINK_HEADLESS             = 2,
	EPIC_LINK_EXTERNAL             = 3,
	EAlternateLoginType_MAX        = 4
};


// Enum GunfireTechRequirements.EPresenceContent
enum class EPresenceContent : uint8_t
{
	MENU                           = 0,
	TUTORIAL                       = 1,
	CITY_ADVENTURE                 = 2,
	CITY_CAMPAIGN                  = 3,
	CITY_SURVIVAL                  = 4,
	CORSUS_ADVENTURE               = 5,
	CORSUS_CAMPAIGN                = 6,
	CORSUS_SURVIVAL                = 7,
	RHOM_ADVENTURE                 = 8,
	RHOM_CAMPAIGN                  = 9,
	RHOM_SURVIVAL                  = 10,
	YAESHA_ADVENTURE               = 11,
	YAESHA_CAMPAIGN                = 12,
	YAESHA_SURVIVAL                = 13,
	RURAL_ADVENTURE                = 14,
	RURAL_CAMPAIGN                 = 15,
	RURAL_SURVIVAL                 = 16,
	REISUM_ADVENTURE               = 17,
	REISUM_CAMPAIGN                = 18,
	REISUM_SURVIVAL                = 19,
	LABYRINTH_CAMPAIGN             = 20,
	LABYRINTH_SURVIVAL             = 21,
	WARD13                         = 22,
	WARD17                         = 23,
	WARD_PRIME                     = 24,
	EPresenceContent_MAX           = 25
};


// Enum GunfireTechRequirements.ELicensedContent
enum class ELicensedContent : uint8_t
{
	PreOrderGladiator              = 0,
	PreOrderSurvivor               = 1,
	PreOrderNightstalker           = 2,
	PreOrderDoomsayer              = 3,
	PreOrderTwitch                 = 4,
	PreOrderSteam                  = 5,
	GreenXCap                      = 6,
	GoldCap                        = 7,
	DLC1                           = 8,
	DLC2                           = 9,
	None                           = 10,
	ELicensedContent_MAX           = 11
};


// Enum GunfireTechRequirements.ETechReqStatusChange
enum class ETechReqStatusChange : uint8_t
{
	ConnectionLost                 = 0,
	InternetLost                   = 1,
	LiveLost                       = 2,
	PlusLost                       = 3,
	SessionLost                    = 4,
	UpdateRequired                 = 5,
	PatchRequired                  = 6,
	AgeRestricted                  = 7,
	UserNotLoggedIn                = 8,
	NeedsFullInstall               = 9,
	DlcLicenseLost                 = 10,
	Normal                         = 11,
	Unknown                        = 12,
	ProfileAgeRestricted           = 13,
	PreOrderInstalled              = 14,
	MissingDLCParty                = 15,
	MissingDLC1                    = 16,
	MissingDLC2                    = 17,
	MissingDLC2Party               = 18,
	ETechReqStatusChange_MAX       = 19
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
