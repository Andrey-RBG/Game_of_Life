#include "instructions.h"


int main()
{
    /* "+" - alive, "-" - dead, " " - border.*/
    int numbers[8][8] = {{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0}};
    char yard[10][19] = {
    "                   ",
    "  + - + - - - - -  ",
    "  - + + - - - - -  ",
    "  - + - - - - - -  ",
    "  - - - - - - - -  ",
    "  - - - - - - - -  ",
    "  - - - - - - - -  ",
    "  - - - - - - - -  ",
    "  - - - - - - - -  ",
    "                   ",
    };
    while(1){
        for(int i = 1; i < 10; i++){
            for(int j=2; j<17;j += 2){
                printf("%c", yard[i][j]);
            }
        printf("\n");
        }    
        int yn = 0;
        for(int i = 1; i < 9; i++){
            int xn = 0;
            for(int j=2; j<17;j += 2){
                int cunt = neighbour(yard,i,j);
                numbers[yn][xn] = cunt;
                xn++;
            }
            yn++;
        }
        /*for(int i = 0; i < 8; i++){
            for(int j=0; j<8;j++){
                printf("%d", numbers[i][j]);
            }
        printf("\n");
        }*/
        yn = 0;
        for(int i = 1; i < 9; i++){
            int xn = 0;
            for(int j=2; j<17;j += 2){
                if(yard[i][j] == '+'){
                    if((numbers[yn][xn] > 3) || (numbers[yn][xn] < 2)){
                        yard[i][j] = '-';
                    }
                }
                else if (yard[i][j] == '-')
                {
                    if(numbers[yn][xn] == 3){
                        yard[i][j] = '+';
                    }
                }
                
                xn++;
            }
            yn++;
        }
    sleep(10);
    }
}


