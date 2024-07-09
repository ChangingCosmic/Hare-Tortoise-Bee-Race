include "animals.h"

int main() {
    int posTort = 0;
    int posHare = 0;
    int posBee = 0;

    int lead = 5;
    int HARE_NUM = 1;  // number associated with hare
    int TORT_NUM = 0;  // number associated with tortoise
    int BEE_NUM = 2;   // number associated with bee

    int time = 0;
    int winningSquare = 70;

    int userNumber;
    printf("Please enter a random number seed.\n");
    scanf("%d", &userNumber);

    srand(userNumber);
    
    while(winningSquare > posHare && winningSquare > posBee && winningSquare > posTort){
        time++;

        posHare = update_hare(posHare);
        if (winningSquare <= posHare){
            printf("After %d seconds, the hare wins!!\n", time);
            break;
        }

        posTort = update_tortoise(posTort);
        if(winningSquare <= posTort) {
            printf("After %d seconds, the tortoise wins!!\n", time);
            break;
        }

        posBee = update_bee(posBee);
        if(winningSquare <= posBee) {
            printf("After %d seconds, the bee wins!!\n", time);
            break;
        }
        
        if(posHare > posTort && posHare > posBee) { //hare is leading
            if (HARE_NUM == lead){ //checks if it's been the last leader
                continue;
            }
            else{
                printf("At t = %d, the hare (square %d) has taken the lead.\n", time, posHare);
                lead = HARE_NUM;
            }
        }
        else if(posTort > posHare && posTort > posBee){ //tortoise is leading
            if (TORT_NUM == lead){ //checks if it's been the last leader
                continue;
            }
            else{
                printf("At t = %d, the tortoise (square %d) has taken the lead.\n", time, posTort);
                lead = TORT_NUM;
            }
        }
        else if (posBee > posHare && posBee > posTort) { //bee is leading
            if (BEE_NUM == lead){ //checks if it's been the last leader
                continue;
            }
            else{
                printf("At t = %d, the bee (square %d) has taken the lead.\n", time, posBee);
                lead = BEE_NUM;
            }
        }
        else { //someone tied
            continue;
        }
    }
    return 0;
}