// name Getter func

#include <stdio.h>
#include <string.h>
#include "nameGetter.h"
#include "../player.h"

#define MAX_BUFF 20

void nameGetter(char nameVar[])
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

        fgets(uName, MAX_BUFF, stdin);

        strcpy(nameVar, uName);
        
        //memcpy(nameVar, uName, strlen(uName) + 1);
        printf("playerOne.PlayerName in func: %s", nameVar);
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
