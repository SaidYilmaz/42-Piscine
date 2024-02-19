char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] != c && s[i] != '\0')
        i++;
    if(s[i] == '\0')
    {    if(c != '\0')
            return(0);
        else
            return((char *)(s + i));
    }
    return((char *)(s + i));
}
