int _putchar(char c)
{
    return (write(1, &c, 1));
}

int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c)
{
    return (_islower(c) || _isupper(c));
}

int _abs(int n)
{
    return (n < 0 ? -n : n);
}

int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
    int len = 0;
    while (*s++)
        len++;
    return (len);
}

void _puts(char *s)
{
    while (*s)
        _putchar(*s++);
    _putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
    char *tmp = dest;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return (tmp);
}

int _atoi(char *s)
{
    int n = 0, sign = 1;
    while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
        s++;
    if (*s == '+' || *s == '-')
        sign = (*s++ == '+') ? 1 : -1;
    while (*s >= '0' && *s <= '9')
        n = n * 10 + (*s++ - '0');
    return (n * sign);
}

char *_strcat(char *dest, char *src)
{
    char *tmp = dest;
    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return (tmp);
}

char *_strncat(char *dest, char *src, int n)
{
    char *tmp = dest;
    while (*dest)
        dest++;
    while (n-- > 0 && *src)
        *dest++ = *src++;
    *dest = '\0';
    return (tmp);
}

char *_strncpy(char *dest, char *src, int n)
{
    char *tmp = dest;
    while (n-- > 0 && *src)
        *dest++ = *src++;
    while (n-- > 0)
        *dest++ = '\0';
    return (tmp);
}

int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
        s1++, s2++;
    return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n)
{
    char *tmp = s;
    while (n-- > 0)
        *s++ = b;
    return (tmp);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *tmp = dest;
    while (n-- > 0)
        *dest++ = *src++;
    return (tmp);
}

char *_strchr(char *s, char c)
{
    while (*s && *s != c)
        s++;
    return (*s == c ? s : NULL);
}

unsigned int _strspn(char