#include <stdio.h>

int main(){
    int num = 0, end = 0, num1 = 0, num2 = 0;
    do{
        printf("=========계산기=========\n");
        printf("1.더하기\n");
        printf("2.빼기\n");
        printf("3.곱하기\n");
        printf("4.끝내기\n");
        printf("번호를 입력하세요 : ");
        scanf("%d", &num);
        if(num <= 4){
            printf("점수 두개를 입력하세요 : ");
            scanf("%d %d",&num1, &num2);
            switch (num)
            {
            case 1:
                printf("계산결과 : %d + %d = %d 입니다\n",num1,num2,num1+num2);
                break;
            
            case 2:
                printf("계산결과 : %d - %d = %d 입니다\n",num1,num2,num1-num2);
                break;
            
            case 3:
                printf("계산결과 : %d X %d = %d 입니다\n",num1,num2,num1*num2);
                break;
            case 4:
                end = 1;
                break;
            }
        }
    }while(end == 0);
    return 0;
}