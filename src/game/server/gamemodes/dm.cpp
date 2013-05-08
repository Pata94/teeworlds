/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
/* This file is from the Mod "Dropped" by Pata see github.com/Pata94 */
#include "dm.h"


CGameControllerDM::CGameControllerDM(class CGameContext *pGameServer)
: IGameController(pGameServer)
{
	m_pGameType = "DropDM";
}

void CGameControllerDM::Tick()
{
	IGameController::Tick();
}
