#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random = 0, amount = 0, end = 1, count = 0;
    srand (time(NULL));
    random = rand()%100+1;

    for(;end == 1;){
        printf("1 - 100 사이의 수를 입력하세요\n");
        scanf("%d", &amount);
        if(amount > 100){
            end = 0;
        }else if(amount < random){
            printf("up\n");
            count++;
        }else if(amount > random){
            printf("down\n");
            count++;
        }else if(amount == random){
            count++;
            printf("정답입니다 시도횟수 : %d",count);
            end = 0;
        }
    }
    return 0;
}