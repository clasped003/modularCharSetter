// get user age
#include <stdio.h>
#include <stdlib.h>
#include "../player.h"
#include "ageGetter.h"


void ageGetter(int *ageVar)
{
    char agePasser[4];
    puts("What is your Age? (Number between 18 to 126)");
    fgets(agePasser, 4, stdin);
    *ageVar = atoi(agePasser);
}// ageGetter

