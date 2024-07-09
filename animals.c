#include "animals.h"

int update_hare(int currentPos) {
    float val = ((float) rand() / (float) (RAND_MAX));

    if(0 <= val && 0.25 > val){         //sleep
        return currentPos;
    }
    else if(0.25 <= val && 0.45 > val){ //big hop
        return currentPos + 9;
    }
    else if(0.45 <= val && 0.55 > val){ //big slip
        if (0 > currentPos - 10){
            return 0;
        }
        else {
            return currentPos - 10;
        }
    }
    else if(0.55 <= val && 0.8 > val) { //small hop
        return currentPos + 2;
    }
    else {                              //small slip
        if (0 > currentPos - 3) {
            return 0;
        }
        else {
            return currentPos - 3;
        }
    }
}

int update_tortoise(int currentPos){
    float val = ((float) rand() / (float) (RAND_MAX));

    if(0 <= val && 0.45 > val){         //fast plod
        return currentPos + 3;
    }
    else if(0.45 <= val && 0.65 > val){ //slip
        if (0 > currentPos - 5) {
            return 0;
        }
        else {
            return currentPos - 5;
        }
    }
    else {                              //slow plod
        return currentPos + 1;
    }
}

int update_bee(int currentPos){
    float val = ((float) rand() / (float) (RAND_MAX));

    if(0 <= val && 0.3 > val){          //fly fast
        return currentPos + 2;
    }
    else if(0.3 <= val && 0.5 > val){   //fly slow
        return currentPos + 1;
    }
    else {                              //rest
        return currentPos;
    }
}