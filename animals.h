#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/***************************************************
* int update_hare(int current_position)
* Determines the new position of the hare after 1 second
*
* Parameters:
*   currentPos: the current location of the hare
* Returns:
*   The new position of the hare
************************************************/
int update_hare(int currentPos);

/***************************************************
* int update_bee(int current_position)
* Determines the new position of the bee after 1 second
*
* Parameters:
*   currentPos: the current location of the bee
* Returns:
*   The new position of the bee
************************************************/
int update_bee(int currentPos);

/***************************************************
* int update_bee(int current_position)
* Determines the new position of the tortoise after 1 second
*
* Parameters:
*   currentPos: the current location of the tortoise
* Returns:
*   The new position of the tortoise
************************************************/
int update_tortoise(int currentPos);