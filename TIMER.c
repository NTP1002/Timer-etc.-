#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

static short sec, min, hour, key, shift;

unsigned long time_sec, time_1;

int printclock(){
    system("cls");
    printf("�ð� : %d | �� : %d | �� : %d\n", hour, min, sec);
}

int main(){
    system("title Ÿ�̸�");
    printclock();
    while(1)
    {
    key = getch();
    if(key == 224){
        key = getch();
        if(key == 77){          //�����̵�
            shift++;
            if(shift == 3){
                shift = 0;
            }
        }

        if(key == 75){          //�����̵�
            shift--;
            if(shift == -1){
                shift = 2;
            }
        }


        if(key == 72 & shift == 0){         //�ð� ����
            hour++;
            printclock();
        }else if(key == 80 & shift == 0 & hour > 0){        //�ð� ����
            hour--;
            printclock();
        }

        if(key == 72 & shift == 1 & min < 59){        //�� ����
            min++;
            printclock();
        }else if(key == 80 & shift == 1 & min > 0){          //�� ����
            min--;
            printclock();
        }

        if(key == 72 & shift == 2 & sec < 59){         //�� ����
            sec++;
            printclock();
        }else if(key == 80 & shift == 2 & sec >0){      //�� ����//
            sec--;
            printclock();
        }
        }
        if(key == 13){
            break;
        }
    }

    time_sec = hour*3600 + min*60 + sec;
    clock_t start = clock();
    static clock_t end;
    static unsigned long time;
    while (1)
    {
        end = clock();
        time = end - start;
        time = time/1000;
        time_1 = time_sec - time;
        printf("�ð� : %d | �� : %d | �� : %d ���ҽ��ϴ�\n", time_1/3600, time_1/60%60, time_1%60);
        system("cls");
        if(time_sec == time){
            break;
        }
    }
    printf("������ �ð��� ��� �������ϴ�\n");
    printf("�ƹ� Ű�� ������ â�� ����˴ϴ�");
    while (1)
    {
        if(kbhit() == 1){
            return 0;
        }
    }
}