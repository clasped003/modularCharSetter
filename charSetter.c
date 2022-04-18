/*Notes:
 * Practicing creating a Character by using modular files tied by headers.
 * The player file is stored in a player.h file. Not supposed to be in a separate
 * source file for this specific purpose. Values for the struct need to be
 * initiated in a source file though. . .look this up further. . . it might
 * be possible to pass the whole struct to a separate function to
 * instantiate all the needed initial values.
 *
 * The void function gets fed a pointer (pass by reference to it in main in
 * the ageGetter parameters), which is in a function in a separate file(ageGetter.c
 * & ageGetter.h), which then gives a new value to the variable which can
 * be called on again because its a pointer in a void func, does not need a 
 * return statement.
 *
 *  --Steps--:
 * 1. Create your main src file and int main(). Test it compiles.
 *
 * 2. Create the player.h file, and create the struct definition and
 * variable declaration in that
 * same header file. You have to declare the struct instance and instantiate
 * each variable in that struct in a source file (giving the struct variables
 * actual values in the header file instead of just creating the variable
 * definitions seems to mess up the compilation.). Do that and then recompile
 * and test.
 *
 * 3. Create the void function declaration in main source file (preferably
 * inside of the main function, but test this), then make 
 * the header file, link them and then declare and instantiate the function
 * in the function's source file. Remember to include a varType *var_name in the
 * parameter of the function. Can include a prompt parameter also. 
 *
 * 4. Test the function is connected to main by using a test printf or puts
 * function in the void function itself and remember to add a function call
 * in main source file.
 *
 * 5. Depending on the function, you will either manipulate the pointer from the
 * parameter directly, or convert it to a different var type, or feed it a value
 * from a variable you have to make in the function.
 *
 * 6. Test the value got passed to main with a comparing printf function testing
 * the pointer's value both in the void function and back in main after
 * the function call.
 * 
 * Made of 8 files: testmain.c, charSetter.c, charSetter.h, player.h, 
 * ageGetter.c, ageGetter.h, letterGetter.c, letterGetter.h
 */

#include <stdio.h>
#include <string.h>
#include "player.h"//only .h file, there is no .c file
#include "attributeFuncs/ageGetter.h"
#include "attributeFuncs/letterGetter.h"
#include "attributeFuncs/classGetter.h"
#include "attributeFuncs/nameGetter.h"

void charSetter(){
    //Var init
    player playerOne;
    playerOne.playerAge = 0;//Needs to be instantiated
    playerOne.playerGender = 'i';
    playerOne.playerClass = 'i';
    //playerOne.playerName;
    //function start
    puts("* * * Starting in charSetter function * * *\n");
    printf("Starting Age in charSetter: %d\n", playerOne.playerAge);
    printf("Starting gender in charSetter: %c\n", playerOne.playerGender);
    printf("Starting class in classSetter: %c\n", playerOne.playerClass);
    printf("Starting name in nameSetter: %s\n\n", playerOne.playerName);

    puts("* * * charSetter prompts, still in charSetter Function * * *\n");
    puts("Character Creation. . . ");
    puts("Tell us about yourself. . . \n");
    puts("* * * Entering the functions via function calls* * *\n");

    //declare & initiate function, pass struct var reference to function
    ageGetter(&playerOne.playerAge);
    letterGetter(&playerOne.playerGender);
    classGetter(&playerOne.playerClass);
    nameGetter(&playerOne); 

    //summary from function
    puts("\n* * * Back in charSetter Function * * *\n");
    printf(" Returned from function, your age is: %d\n", playerOne.playerAge);
    printf(" Returned from function, your gender is: %c\n", playerOne.playerGender);
    printf(" Returned from function, your class is: %c\n", playerOne.playerClass);
    printf(" Returned from function, your name is: %s\n", playerOne.playerName);
}
