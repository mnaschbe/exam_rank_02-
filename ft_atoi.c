#include<unistd.h>
#include<stdio.h>

int ft_atoi(char *s)
{
    int i= 0;
    int sign = 1;
    int nb;
    
    while(s[i] == '\t' || s[i] == '\n' || s[i] == 32)
    i++;
    if (s[i] == 45)
        sign = sign * -1;
    else if (s[i] == 43)
        i++;
    while (s[i] >= 48 && s[i] <= 57)
    {
        nb = nb * 10 + (s[i] - '0');
        i++;
    }
    return (sign * nb);
}
    
    
    
    
    
    