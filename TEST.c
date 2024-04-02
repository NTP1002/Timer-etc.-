#include <stdio.h>

#include <time.h>

#include <stdlib.h>

#include <conio.h>

#include <windows.h>

 

long time_to_number(void);

void dot_print(int hour);

void digital_print(int dim[], int check);

void gotoxy(int x, int y);

void number_check(int k, int i);

int hour_to_number(void);

 

int zero[20] = {1,1,1,1,
                1,0,0,1,
                1,0,0,1,
                1,0,0,1,
                1,1,1,1};

int one[20] = {0,0,1,0,

                          0,0,1,0,

                          0,0,1,0,

                          0,0,1,0,

                          0,0,1,0};



int two[20] = {1,1,1,1,

                          0,0,0,1,

                          1,1,1,1,

                          1,0,0,0,

                          1,1,1,1};

int three[20] = {1,1,1,1,

                               0,0,0,1,

                               1,1,1,1,

                               0,0,0,1,

                               1,1,1,1};

int four[20] = {1,0,1,0,

                              1,0,1,0,

                              1,1,1,1,

                              0,0,1,0,

                              0,0,1,0};

int five[20] = {1,1,1,1,

                              1,0,0,0,

                              1,1,1,1,

                              0,0,0,1,

                              1,1,1,1};

int six[20] = {1,0,0,0,

                          1,0,0,0,

                          1,1,1,1,

                          1,0,0,1,

                          1,1,1,1};

int seven[20] = {1,1,1,1,

                               1,0,0,1,

                               1,0,0,1,

                               0,0,0,1,

                               0,0,0,1};

int eight[20] = {1,1,1,1,

                               1,0,0,1,

                               1,1,1,1,

                               1,0,0,1,

                               1,1,1,1};

int nine[20] = {1,1,1,1,

                              1,0,0,1,

                              1,1,1,1,

                              0,0,0,1,

                              0,0,0,1};

 


int main(void)

{

        int line;

        long time_number;

        int hour;

        printf("디지털시계프로그램\n\n");

        printf("아무키나누르면현재시간을출력합니다.\n");

        getch();

        system("cls");

        while(!kbhit())

        {

               gotoxy(1,2);

               time_number = time_to_number();

               for(line=0; line<=4; line++)

               {

                       number_check(time_number, line);

                       printf("\n");

               }

               hour = hour_to_number();

               dot_print(hour);

               printf("\n\n\n\n 아무키나누르면종료합니다.\n");

        }

        return 0;

}

int hour_to_number(void)

{

        int hour;

        time_t current;

        struct tm *d;

        current = time(NULL);

        d = localtime(&current);

        hour = d->tm_hour*10000;

        return hour;

}

/* 시, 분, 초 단위의 값을 하나의 정수로 변환하는 함수*/

long time_to_number(void)

{

        int hour, min, sec;

        time_t current;

        struct tm *d;

        current = time(NULL);

        d = localtime(&current);

        hour = d->tm_hour*10000;

        min = d->tm_min*100;

        sec = d->tm_sec;

        return hour+min+sec;

}

/* 시, 분, 초 사이의 구분을 위한 도트 출력 함수dot_print */

void dot_print(int hour)

{

        int i;

        if(hour<100000)        // 0시~9시

        {

               for(i=0; i<2; i++)

               {

                       gotoxy(10+(i*24), 3);      // 도트의 위치가 맞지 않아서, gotoxy()의 좌표값을 수정.  

                       printf("■");

                       gotoxy(10+(i*24), 5);

                       printf("■");

               }

        } else {               // 10시~24시

               for(i=0; i<2; i++)

               {

                       gotoxy(22+(i*24), 3);

                       printf("■");

                       gotoxy(22+(i*24), 5);

                       printf("■");

               }

        }

}

void digital_print(int dim[], int line)

{

        int i;

        for(i=line*4; i<=line*4+3; i++)

        {

               if(dim[i] == 1) {

                       printf("■");

               } else{

                       printf("  ");

               }

        }

        printf("    ");

}

/* 입력된 숫자에 해당하는 배열로 digital_printf() 호출*/

void number_check(int k, int i)

{

        if(k>=1)

        {

               number_check(k/10, i);

               switch(k%10)

               {

                       case 0:

                              digital_print(zero, i);

                              break;

                       case 1:

                              digital_print(one, i);

                              break;

                       case 2:

                              digital_print(two, i);

                              break;

                       case 3:

                              digital_print(three, i);

                              break;

                       case 4:

                              digital_print(four, i);

                              break;

                       case 5:

                              digital_print(five, i);

                              break;

                       case 6:

                              digital_print(six, i);

                              break;

                       case 7:

                              digital_print(seven, i);

                              break;

                       case 8:

                              digital_print(eight, i);

                              break;

                       case 9:

                              digital_print(nine, i);

                              break;

               }

        }

}

void gotoxy(int x, int y)

{

        COORD Pos = {x-1, y-1};

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}