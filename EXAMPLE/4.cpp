#include <stdio.h>

int main(){
    int amount = 0, price = 0, discount = 0;
    printf("������ ���� : ");
    scanf("%d", &price);
    printf("������ ���� : ");
    scanf("%d", &amount);
    printf("���� ���� �ݾ� : ");
    scanf("%d", &discount);
    if(price*amount > discount){
        printf("%0.lf��", amount*price*0.95);
    }else{
        printf("%d��", amount*price );
    }
    return 0;
}