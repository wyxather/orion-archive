#include "GlobalVars.h"
#include "SDK/Class/Entity.h"
#include "SDK/Class/UserCmd.h"
#include "SDK/LocalPlayer.h"

static int tick;
static const UserCmd* lastCmd;

void GlobalVars::serverTime(const UserCmd& cmd) noexcept
{
    if (localPlayer && (!lastCmd || lastCmd->hasbeenpredicted))
        tick = localPlayer->m_nTickBase();
    else
        tick++;
    lastCmd = &cmd;
}

float GlobalVars::serverTime() const noexcept
{
    return tick * intervalPerTick;
}