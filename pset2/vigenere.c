#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[]){
    string key = argv[1];

    // int key_lenth - узнает длину ключа, нужна для проверки
    int lenth_key = strlen(key);

    //Проверка допустимости ключа
    for(int i = 0; i < lenth_key; i++){
        if(isalpha(key[i])==false){
            printf("Wrong key word");
            return 0;
        }
    }

    // int k - увеличение знака в ASCII
    int k;
    // int kj - переберает (char) key
    int kj=0;
    // int ki - определяется нумерация (char) kj в английском алфавите
    int ki = tolower(key[kj])-'a';
    // char result - зашифрованный текст
    char result;

    //Получаем текст для шифровки
    string text=get_string("Enter text: ");

    // int lenth_text - узнает длину текста, нужна для алгоритма
    int lenth_text = strlen(text);

    //Вывод зашифрованного текста
    printf("Cipher text: ");

    //Алшоритм шифра Виженера
    for(int i = 0; i < lenth_text; i++){
        //Проверка пренадлежности (char)text к английскому языку
        if(isalpha(text[i])){
            //Определяем какой по счету (char) key будет использоваться для сдвига (char) text
            k=ki%lenth_key;
            //Проверка условий для строчных и пропесных (char) text
            if(isupper(text[i])){
                result = (text[i]-'A'+k)%26+'A';
                printf("%c",result);
                 kj++;
            }
            else if(islower(text[i])){
                result = (text[i]-'a'+k)%26+'a';
                printf("%c",result);
                kj++;
            }
        }
        else{
            printf("%c",text[i]);
        }
    }
    printf("\n");
}