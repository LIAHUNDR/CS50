#include <stdio.h>
#include <cs50.h>

int main(void){
    //Запрашиваем сдачу
    int change;
    change = (int)(get_float("O hai! How much change is owed?\n") * 100);

    //Обьявляем счетчик кол-ва монет и отдельные счетчики для монеты каждого номенала
    int count = 0;
    int TwentyFiveCents=0;
    int TenCents=0;
    int FiveCents=0;
    int OneCent=0;

    //Алгоритм распределения
    while(change > 0){
        //Проверка на возможность деления на 25 центов
        while (change - 25 >= 0){
            change-=25;
            count++;
            TwentyFiveCents++;
        }
        //Проверка на возможность деления на 10 центов
        while (change - 10 >= 0){
            change-=10;
            count++;
            TenCents++;
        }
        //Проверка на возможность деления на 5 центов
        while (change - 5 >= 0){
            change-=5;
            count++;
            FiveCents++;
        }
        //Проверка на возможность деления на 1 цент
        while (change - 1 >= 0){
            change-=1;
            count++;
            OneCent++;
        }
    }

    //Выводим кол-во монет
    printf("Coins: %i \n25Cents: %i \n10Cents: %i \n5Cents: %i \n1Cent: %i \n" , count , TwentyFiveCents , TenCents , FiveCents , OneCent);
}