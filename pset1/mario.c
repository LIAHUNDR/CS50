#include <stdio.h>
#include <cs50.h>

int main(void){
    //Ввод высоты
    int height = get_int("Give height (min:0 ; max23): ");

    //Проверка введенной высоты
    while(height < 0 || height >23){
        printf("You give wrong height \n");
        height = get_int("Give height (min:0 ; max23): ");
     }

     //Алгоритм создания пирамиды
     for(int level = 1; level <= (height); level++){
         for (int width = 1; width <= (height+1); width++){
             if (width < height-level+1){
                 printf(" ");
             }
             else if(width >= height-level){
                 printf("#");
             }
         }
         printf("\n");
     }
}


//Я сам до конца не понял логику алгоритма, но оно работает. Если вы сможете обьяснить, пожалуйста напишите на почту nilinad.vlr@gmail.com

