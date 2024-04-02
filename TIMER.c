#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

static short sec, min, hour, key, shift;

unsigned long time_sec, time_1;

int printclock(){
    system("cls");
    printf("시간 : %d | 분 : %d | 초 : %d\n", hour, min, sec);
}

int main(){
    system("title 타이머");
    printclock();
    while(1)
    {
    key = getch();
    if(key == 224){
        key = getch();
        if(key == 77){          //우측이동
            shift++;
            if(shift == 3){
                shift = 0;
            }
        }

        if(key == 75){          //좌측이동
            shift--;
            if(shift == -1){
                shift = 2;
            }
        }


        if(key == 72 & shift == 0){         //시간 증가
            hour++;
            printclock();
        }else if(key == 80 & shift == 0 & hour > 0){        //시간 감소
            hour--;
            printclock();
        }

        if(key == 72 & shift == 1 & min < 59){        //분 증가
            min++;
            printclock();
        }else if(key == 80 & shift == 1 & min > 0){          //분 감소
            min--;
            printclock();
        }

        if(key == 72 & shift == 2 & sec < 59){         //초 증가
            sec++;
            printclock();
        }else if(key == 80 & shift == 2 & sec >0){      //초 감소//
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
        printf("시간 : %d | 분 : %d | 초 : %d 남았습니다\n", time_1/3600, time_1/60%60, time_1%60);
        system("cls");
        if(time_sec == time){
            break;
        }
    }
    printf("설정한 시간이 모두 끝났습니다\n");
    printf("아무 키나 누르면 창이 종료됩니다");
    while (1)
    {
        if(kbhit() == 1){
            return 0;
        }
    }
}