#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string ans = get_string( "What is your name? ");
    printf("hello,  %s!!!\n", ans);
    return 0;
}