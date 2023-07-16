#include <stdio.h>
#include <unistd.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    while(str[i-1] != '\0'){
        write(1, &str[i-1], 1);
        i--;
    }
    return 0;
}

int main()
{
    char str[] = "batuhan";
    ft_strrev(str);
}