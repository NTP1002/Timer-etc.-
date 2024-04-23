#include <stdio.h>

int main(){
    int N;
    printf("ют╥б : ");
    scanf("%d",&N);
    for(int i = 1; i <= N; i++){
        for(int j = 1; j < i; j++){
            printf(" ");
        }

        for(int e = 1; e <= (2*N-(2*i-1)); e++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = N-1; i >= 1; i--){
        for(int j = 1; j < i; j++) {
            printf(" ");
        }
        
        for(int e = 1; e <= (2*N-(2*i-1)); e++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}