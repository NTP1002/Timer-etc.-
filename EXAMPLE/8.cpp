#include <stdio.h>

int main(){
    int n, p, result;
    printf("���� �Է��ϼ��� : ");
    scanf("%d",&n);
    p = n;
    result = n;
    printf("%d! = %d ",n,n);
    for(int i = 0; i < (n - 1); i++){
        p--;
        printf("X %d ",p);
        result = result*p;
    }
    printf("= %d",result);
    return 0;
}