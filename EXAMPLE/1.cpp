#include <stdio.h>

int main(){
    char grade = 0;
    int id = 0;
    printf("�й� �Է� : ");
    scanf("%d", &id);
    getchar();
    printf("��ǥ ���� �Է� : ");
    scanf("%c", &grade);
    printf("�й� : %d\n", id);
    printf("��ǥ���� : %c\n", grade);
    return 0;
}