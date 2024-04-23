#include <stdio.h>

int main(){
    int num = 0, num1 = 0, num2 = 0;
    printf("세 문자 입력 : ");
    scanf("%d %d %d", &num, &num1, &num2);
    printf("더하기 : %d\n", num+num1+num2);
    printf("빼기 : %d\n", num-num1-num2);
    printf("곱하기: %d\n", num*num1*num2);
    printf("나누기: %d\n", (num+num1)/num2);
    return 0;
}