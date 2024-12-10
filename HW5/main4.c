#include <stdio.h>

int main()
{
    int i = 12345;

    int thou = (i/1000) % 10;//千位數
    int hun = (i / 100) % 10;//百位數
    int ten = (i / 10) % 10;//十位數
    int sin = i % 10;//個位數

    int num = i - thou * 1000 - sin * 1;//把千位和個位清空
    int NUM = 0;

            if (thou == 0 && hun != 0 && ten != 0 && sin != 0)
            {
                NUM = sin * 1000 + hun * 100 + ten * 10;
            }
            else if (thou == 0 && hun == 0 && ten != 0 && sin != 0)
            {
                NUM = sin * 1000 + ten * 10;
            }
            else if (thou == 0 && hun == 0 && ten == 0 && sin != 0)
            {
                NUM = sin * 1000;
            }
            else
            {
                NUM = num + sin * 1000 + thou * 1;
            }
            printf("%d", NUM);

            return 0;
}
