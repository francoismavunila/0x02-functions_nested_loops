#include "main.h"


/**
 * main - Entry point
 * Return:0
 */

char characters[9]="_putchar";

int main(void)
{
    int i=0;
    for(i=0;i<=8;i++)
    {
        _putchar(characters[i]);
    }
    
    return 0;
}

