#include <stdio.h>

int main(){
    int start = 0, end = 0;
    printf("시작값 입력 : ");
    scanf("%d", &start);
    printf("마지막값 입력 : ");
    scanf("%d", &end);

    for( ; start <= end ; start++){
        for(int i = 1 ; i <= 9 ; i++){
            printf("%d X %d = %d\n", start, i, start*i);
        }
    }
    return 0;
}