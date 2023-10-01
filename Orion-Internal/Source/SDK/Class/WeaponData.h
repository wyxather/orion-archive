#pragma once

#include "class.h"

enum class WeaponType;

class WeaponInfo
{
public:
	INCONSTRUCTIBLE(WeaponInfo);

	char(*__vftable)[4]; //0x0000
	char* szConsoleName; //0x0004
	char pad_0008[8]; //0x0008
	char(*pBaseItemDefinition)[4]; //0x0010
	int32_t iMaxClip1; //0x0014
	int32_t iMaxClip2; //0x0018
	int32_t iDefaultClip1; //0x001C
	int32_t iDefaultClip2; //0x0020
	int32_t iMaxReservedAmmo; //0x0024
	char pad_0028[4]; //0x0028
	char* szWorldModel; //0x002C
	char* szViewModel; //0x0030
	char* szDroppedModel; //0x0034
	char* szEmptySound; //0x0038
	char* szShotSound; //0x003C
	char pad_0040[20]; //0x0040
	char* szReloadSound; //0x0054
	char pad_0058[16]; //0x0058
	char* szShotSoundSpecial; //0x0068
	char pad_006C[12]; //0x006C
	char* szNearlyEmptySound; //0x0078
	char pad_007C[4]; //0x007C
	char* szBulletType; //0x0080
	char pad_0084[4]; //0x0084
	char* szHudName; //0x0088
	char* szWeaponName; //0x008C
	char pad_0090[12]; //0x0090
	int32_t iWeight; //0x009C
	int32_t iRumbleEffect; //0x00A0
	char pad_00A4[32]; //0x00A4
	char(*m_pItemDefinition)[4]; //0x00C4
	WeaponType m_WeaponType; //0x00C8
	uint32_t m_WeaponGroup; //0x00CC
	int32_t m_iWeaponPrice; //0x00D0
	int32_t m_iKillAward; //0x00D4
	char* m_szPlayerAnimationExtension; //0x00D8
	float m_flCycleTime[2]; //0x00DC
	float m_flTimeToIdleAfterFire; //0x00E4
	float m_flIdleInterval; //0x00E8
	bool m_bFullAuto; //0x00EC
	char pad_00ED[3]; //0x00ED
	int32_t m_iDamage; //0x00F0
	float m_flHeadshotMultiplier; //0x00F4
	float m_flArmorRatio; //0x00F8
	int32_t m_iBullets; //0x00FC
	float m_flPenetration; //0x0100
	float m_fFlinchVelocityModifierLarge; //0x0104
	float m_fFlinchVelocityModifierSmall; //0x0108
	float m_flRange; //0x010C
	float m_flRangeModifier; //0x0110
	float m_fThrowVelocity; //0x0114
	char pad_0118[12]; //0x0118
	bool m_bHasSilencer; //0x0124
	char pad_0125[3]; //0x0125
	char* m_szSilencerModel; //0x0128
	int32_t m_iCrosshairMinDistance; //0x012C
	int32_t m_iCrosshairDeltaDistance; //0x0130
	float m_flMaxSpeed[2]; //0x0134
	int32_t m_fAttackMoveSpeedFactor; //0x013C
	float m_fSpread[2]; //0x0140
	float m_fInaccuracyCrouch[2]; //0x0148
	float m_fInaccuracyStand[2]; //0x0150
	float m_fInaccuracyJumpInitial[2]; //0x0158
	float m_fInaccuracyJump[2]; //0x0160
	float m_fInaccuracyLand[2]; //0x0168
	char m_fInaccuracyLadder[2][4]; //0x0170
	float m_fInaccuracyImpulseFire[2]; //0x0178
	char m_fInaccuracyMove[2][4]; //0x0180
	float m_fInaccuracyReload; //0x0188
	int32_t m_iRecoilSeed; //0x018C
	float m_fRecoilAngle[2]; //0x0190
	float m_fRecoilAngleVariance[2]; //0x0198
	float m_fRecoilMagnitude[2]; //0x01A0
	float m_fRecoilMagnitudeVariance[2]; //0x01A8
	int32_t m_iSpreadSeed; //0x01B0
	float m_fRecoveryTimeCrouch; //0x01B4
	float m_fRecoveryTimeStand; //0x01B8

}; //Size: 0x01BC
static_assert(sizeof(WeaponInfo) == 0x1BC);