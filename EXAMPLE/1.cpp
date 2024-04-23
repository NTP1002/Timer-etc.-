#include <stdio.h>

int main(){
    char grade = 0;
    int id = 0;
    printf("학번 입력 : ");
    scanf("%d", &id);
    getchar();
    printf("목표 학점 입력 : ");
    scanf("%c", &grade);
    printf("학번 : %d\n", id);
    printf("목표학점 : %c\n", grade);
    return 0;
}