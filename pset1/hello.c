#include <stdio.h>
#include <cs50.h>

int main(void){
    //Ввод имени
    string name = get_string("Whats your name? \n");

    //Вывод приветствия
    printf("hello, %s \n" , name);
}
