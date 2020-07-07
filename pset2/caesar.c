#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[]){
    int key = atoi(argv[1]);

    //Проверка допустимости ключа
    if(argc != 2 || key < 1){
        printf("Next time give me possitive number\n");
        return 0;
    }

    // char result - зашифрованный текст
    char result;

    //Получаем текст для шифровки
    string text = get_string("Enter text: ");

    // int lenth_text - узнает длину текста, нужна для алгоритма
    int lenth_text = strlen(text);

    //Вывод зашифрованного текста
    printf("Cipher text: ");

    //Алгоритм шифра Цезаря
    for(int i = 0; i < lenth_text; i++){
        //Проверка пренадлежности (char)text к английскому языку
        if(isalpha(text[i])){
            //Проверка условий для строчных и пропесных (char) text
            if(isupper(text[i]) && text[i]>'Z'){
                result=(text[i]-'A'+key)%26+'A';
                printf("%c",result);
            }
            else if(islower(text[i]) && text[i]>'z'){
                result=(text[i]-'a'+key)%26+'a';
                printf("%c",result);
            }
            else{
                result=text[i]+key;
                printf("%c",result);
            }
        }
        else{
            printf("%c",text[i]);

        }
    }
    printf("\n");
}
