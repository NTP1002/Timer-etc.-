#include <stdio.h>

int main(){
    int amount = 0, price = 0, discount = 0;
    printf("물건의 가격 : ");
    scanf("%d", &price);
    printf("물건의 개수 : ");
    scanf("%d", &amount);
    printf("할인 제공 금액 : ");
    scanf("%d", &discount);
    if(price*amount > discount){
        printf("%0.lf원", amount*price*0.95);
    }else{
        printf("%d원", amount*price );
    }
    return 0;
}