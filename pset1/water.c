#include <stdio.h>
#include <cs50.h>

int main(void){
    //Запрашиваем время
    int waterminutes = get_int("How much time do you spend in the shower: ");

    //Вычисление
    int bottles = waterminutes*6*2;

    //Выводим кол-во бутылок
    printf("bottels: %i \n" , bottles);
}