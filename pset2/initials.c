#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void){
    //Заппрашиваем Имя и Фами
    string name = get_string("Please enter your firts name and last name: ");

    //Выводим первую букву имени
    printf("%c",toupper(name[0]));

    //Алгоритм для следующих слов (хотя мы запрашвали только имя и фамилию, ну вдруг пользователь введет что-то еще и тогда покажуться первые буквы слов)
    for(int i = 0; i< strlen(name);i++){
        //Проверка на то, что есть пробел, который разделяет слова
        if (name[i]==' '){
            //Выводим первые буквы слов
            printf("%c",toupper(name[i+1]));
        }
    }
    printf("\n");
}