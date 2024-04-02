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

        printf("�����нð����α׷�\n\n");

        printf("�ƹ�Ű������������ð�������մϴ�.\n");

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

               printf("\n\n\n\n �ƹ�Ű�������������մϴ�.\n");

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

/* ��, ��, �� ������ ���� �ϳ��� ������ ��ȯ�ϴ� �Լ�*/

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

/* ��, ��, �� ������ ������ ���� ��Ʈ ��� �Լ�dot_print */

void dot_print(int hour)

{

        int i;

        if(hour<100000)        // 0��~9��

        {

               for(i=0; i<2; i++)

               {

                       gotoxy(10+(i*24), 3);      // ��Ʈ�� ��ġ�� ���� �ʾƼ�, gotoxy()�� ��ǥ���� ����.  

                       printf("��");

                       gotoxy(10+(i*24), 5);

                       printf("��");

               }

        } else {               // 10��~24��

               for(i=0; i<2; i++)

               {

                       gotoxy(22+(i*24), 3);

                       printf("��");

                       gotoxy(22+(i*24), 5);

                       printf("��");

               }

        }

}

void digital_print(int dim[], int line)

{

        int i;

        for(i=line*4; i<=line*4+3; i++)

        {

               if(dim[i] == 1) {

                       printf("��");

               } else{

                       printf("  ");

               }

        }

        printf("    ");

}

/* �Էµ� ���ڿ� �ش��ϴ� �迭�� digital_printf() ȣ��*/

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