#include <stdio.h>

int main(){
    int start = 0, end = 0;
    printf("���۰� �Է� : ");
    scanf("%d", &start);
    printf("�������� �Է� : ");
    scanf("%d", &end);

    for( ; start <= end ; start++){
        for(int i = 1 ; i <= 9 ; i++){
            printf("%d X %d = %d\n", start, i, start*i);
        }
    }
    return 0;
}