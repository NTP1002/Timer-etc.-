#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int random, N, none;
    printf("N을 입력하세요 : ");
    scanf("%d",&N);

    int seat[N];
    srand(time(NULL));
    none = rand() % N + 1;

    for(int i = 0; i < N;i++){
        if(i == none){
            seat[i] = 0;
        }else{
            seat[i] = 1;
        }
    }
    for(int j = 0; j < N;j++){
        if(j%10 == 0 && j != 0){
            printf("\n");
        }
        if(seat[j] == 1){
            printf("□");
        }else{
            printf("■");
        }
    }
    return 0;
}