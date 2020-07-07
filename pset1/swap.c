#include <stdio.h>

void swap(int *a, int *b); //Прототип функции swap

int main(void){
     //Запрашиваем значения для переменных x и y
     int x = get_int("Enter value of x: ");
     int y = get_int("Enter value of y: ");

     //Вызываем функцию swap
     swap(&x, &y);

     //Выводим результат
     printf("x is %i\n", x);
     printf("y is %i\n", y);
}

//Сама функция swap
void swap(int *a, int *b){
     int tmp = *a;
     *a = *b;
     *b = tmp;
}

//Т.к. мы используем в функции swap свои переменные a и b, то в int main(void) переменные x и y не меняют свое значение. Поэтому с помощью * и & мы указываем адресс перемнных x и y. Подробнее https://www.youtube.com/watch?v=hce6yu8BLEM&list=WL&index=3&t=0s