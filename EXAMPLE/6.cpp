#include <stdio.h>

int main(){
    int num = 0, end = 0, num1 = 0, num2 = 0;
    do{
        printf("=========����=========\n");
        printf("1.���ϱ�\n");
        printf("2.����\n");
        printf("3.���ϱ�\n");
        printf("4.������\n");
        printf("��ȣ�� �Է��ϼ��� : ");
        scanf("%d", &num);
        if(num <= 4){
            printf("���� �ΰ��� �Է��ϼ��� : ");
            scanf("%d %d",&num1, &num2);
            switch (num)
            {
            case 1:
                printf("����� : %d + %d = %d �Դϴ�\n",num1,num2,num1+num2);
                break;
            
            case 2:
                printf("����� : %d - %d = %d �Դϴ�\n",num1,num2,num1-num2);
                break;
            
            case 3:
                printf("����� : %d X %d = %d �Դϴ�\n",num1,num2,num1*num2);
                break;
            case 4:
                end = 1;
                break;
            }
        }
    }while(end == 0);
    return 0;
}