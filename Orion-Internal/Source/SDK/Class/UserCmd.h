#pragma once

#include "Class.h"
#include "SDK/Struct/Vector3.h"

class UserCmd // CUserCmd
{
public:
    INCONSTRUCTIBLE(UserCmd);

    enum
    {
        IN_ATTACK = 1 << 0,
        IN_JUMP = 1 << 1,
        IN_DUCK = 1 << 2,
        IN_FORWARD = 1 << 3,
        IN_BACK = 1 << 4,
        IN_USE = 1 << 5,
        IN_CANCEL = 1 << 6,
        IN_LEFT = 1 << 7,
        IN_RIGHT = 1 << 8,
        IN_MOVELEFT = 1 << 9,
        IN_MOVERIGHT = 1 << 10,
        IN_ATTACK2 = 1 << 11,
        IN_RUN = 1 << 12,
        IN_RELOAD = 1 << 13,
        IN_ALT1 = 1 << 14,
        IN_ALT2 = 1 << 15,
        IN_SCORE = 1 << 16,
        IN_SPEED = 1 << 17,
        IN_WALK = 1 << 18,
        IN_ZOOM = 1 << 19,
        IN_WEAPON1 = 1 << 20,
        IN_WEAPON2 = 1 << 21,
        IN_BULLRUSH = 1 << 22,
        IN_GRENADE1 = 1 << 23,
        IN_GRENADE2 = 1 << 24,
        IN_LOOKSPIN = 1 << 25
    };

    char(*__vftable)[4];        //0x0000
    int32_t commandNumber;      //0x0004 - For matching server and client commands for debugging
    int32_t tickCount;          //0x0008 - the tick the client created this command
    Vector3 viewangles;         //0x000C - Player instantaneous view angles.
    Vector3 aimdirection;       //0x0018 - For pointing devices. 
    float   forwardmove;        //0x0024 - Intended velocities // forward velocity.
    float   sidemove;           //0x0028 - Intended velocities // sideways velocity.
    float   upmove;             //0x002C - Intended velocities // upward velocity.
    int32_t buttons;            //0x0030 - Attack button states
    uint8_t impulse;            //0x0034 - Impulse command issued.
    char    pad_0035[3];        //0x0035
    int32_t weaponselect;       //0x0038 - Current weapon id
    int32_t weaponsubtype;      //0x003C
    int32_t randomSeed;         //0x0040 - For shared random functions
    int16_t mousedx;            //0x0044 - mouse accum in x from create move
    int16_t mousedy;            //0x0046 - mouse accum in y from create move
    bool    hasbeenpredicted;   //0x0048 - Client only, tracks whether we've predicted this command at least once
    char    pad_0049[3];        //0x0049

}; //Size: 0x004C
static_assert(sizeof(UserCmd) == 0x4C);