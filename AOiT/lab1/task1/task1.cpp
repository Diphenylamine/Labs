
    // Подклюенние библиотек 
#include <stdio.h>/*фцнкции ввода вывода*/
#include <iostream>
#include <cmath> /*математические функции*/
    int main(){
    double a;

    //Цикл, условие
    do
    {
        scanf("%lf", &a);
        if (a < 2)
        {
            printf("Inter number >= 2\n");
        }
    } while (a < 2);

        // Пример № 1
        double z1 = (sqrt(2 * a + 2 * sqrt(pow(a, 2) - 4))) / (sqrt(pow(a, 2) - 4) + a + 2);

        //  Пример №2
        double z2 = 1 / (sqrt(a + 2));

        //  Вывод данных
        printf("%lf\n", z1);
        printf("%lf\n", z2);

        //  условие на вывод
        if (z1 = z2)
        {
            printf("EH");
        }
    }
