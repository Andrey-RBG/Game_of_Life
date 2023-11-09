#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int neighbour(char arr[10][19],int y, int x){
    int xs[] = {x - 2, x, x + 2};
    int ys[] = {y - 1, y, y + 1};
    int cunt = 0;
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            char obj = arr[ys[i]][xs[j]];
            if(obj == '+'){
                cunt++;
            }
        }
    }
    char obj = arr[y][x];
    if(obj == '+'){
        return (cunt-1);
    }
    else
    {
        return (cunt);
    }
}

/*int checker(char arr[10][19], int y, int x, int neig){
    int xs[] = {x - 2, x, x + 2};
    int ys[] = {y - 1, y, y + 1};
    bool Flag = false;
    for(int i = 0; i < 3; i ++){
        if(Flag == true){
            break;
        }
        for(int j = 0; j < 3; j++){
            if(neighbour(arr,ys[i],xs[j]) == 3){
                return(1);
                Flag = true;
                break;
            }
        }
    }
}*/