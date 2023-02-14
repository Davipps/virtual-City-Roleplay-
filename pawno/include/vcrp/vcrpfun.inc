//include funcoes virtual city roleplay

#include <a_samp>
#define INCLUDE up
//funcoes

stock ClearChatForPlayer(playerid,linhas) //limpar Chat Para Apenas um player
{
    for(new i = 0;i < 10;i++)
    {
    SendClientMessage(playerid,0," ");
    }
    return 1;
}
native ClearChatForPlayer(playerid,linhas);
