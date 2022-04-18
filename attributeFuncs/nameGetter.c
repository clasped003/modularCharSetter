// name Getter func

#include <stdio.h>
#include <string.h>
#include "nameGetter.h"
#include "../player.h"

#define MAX_BUFF 20
void nameGetter(player *playerOne)
{
    // var init
    int loopVar = 1;
    //int spaceCounter = 0;
    char uName[MAX_BUFF];

    // function start
    while(loopVar){
        puts("What is your name?");
        puts("Rules: ");
        puts("1. 20 Characters Max (letters or numbers");     
        puts("2. Only 1 space allowed");
        puts("3. Name can't start with a space");
        puts("4. No blank names");
        puts("5. NO OFFENSIVE NAMES");
        //printf("Your current name is: %s", nameVar);

        fgets(uName, MAX_BUFF, stdin);

        strcpy(playerOne->playerName, uName);
        
        //printf("playerOne.PlayerName in func: %s", nameVar);
        if(strlen(uName) == 1)
        {
            puts("Need to enter a name. Try again.");
            loopVar = 1;
            continue;
        }else{
            puts("Ok.");
            loopVar = 0;
            break;
        }// if

    }// loopVar while

}
