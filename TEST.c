#include <stdio.h>
#include <Windows.h>
#include <conio.h>

int main(){
    int key;
    for( ; ; ){
        key = getch();
        printf("%d\n",key);
        if(key == 8){
            system("cls");
        }
    }
}