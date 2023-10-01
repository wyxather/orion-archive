#include "EnginePrediction.h"
#include "SDK/Class/GameMovement.h"
#include "SDK/Class/GlobalVars.h"
#include "SDK/Class/MoveHelper.h"
#include "SDK/Class/Prediction.h"
#include "SDK/LocalPlayer.h"
#include "Module/Game.h"

auto EnginePrediction::run(UserCmd& cmd) noexcept -> void
{
	if (!localPlayer)
		return;

    *game->memory.predictionRandomSeed = 0;

    const auto oldCurrenttime = game->memory.globalVars->currentTime;
    const auto oldFrametime = game->memory.globalVars->frameTime;

    game->memory.globalVars->currentTime = game->memory.globalVars->serverTime();
    game->memory.globalVars->frameTime = game->memory.globalVars->intervalPerTick;

    game->memory.moveHelper->setHost(localPlayer.get());
    game->interfaces.prediction->setupMove(localPlayer.get(), &cmd, game->memory.moveHelper, game->memory.moveData);
    game->interfaces.gameMovement->processMovement(localPlayer.get(), game->memory.moveData);
    game->interfaces.prediction->finishMove(localPlayer.get(), &cmd, game->memory.moveData);
    game->memory.moveHelper->setHost(nullptr);

    *game->memory.predictionRandomSeed = -1;

    game->memory.globalVars->currentTime = oldCurrenttime;
    game->memory.globalVars->frameTime = oldFrametime;
}