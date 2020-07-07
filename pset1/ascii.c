#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    //Запрашиваем число
    int n = get_int("Enter number: ");

    for(int i = 0; i < n+1 ; i++){
    //С помощью (char) i  мы можем посмотреть числовое занчение char в таблице ASCII
    //Выводим результат
    printf("%c: %i \n", (char) i, i);
    }
}