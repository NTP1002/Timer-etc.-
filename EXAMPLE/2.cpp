#include <stdio.h>

int main(){
    int num = 0, num1 = 0, num2 = 0;
    printf("�� ���� �Է� : ");
    scanf("%d %d %d", &num, &num1, &num2);
    printf("���ϱ� : %d\n", num+num1+num2);
    printf("���� : %d\n", num-num1-num2);
    printf("���ϱ�: %d\n", num*num1*num2);
    printf("������: %d\n", (num+num1)/num2);
    return 0;
}