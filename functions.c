#include "main.h"
/**prChar - prints  a char
  @vars: list of argument
  @buff: buffer
  @count: index of the buffer pointer

Return: buffer index
*/
int prChar(char *buff_dest, va_list vars, int buff_count)
{
        char c = va_arg(vars, int);

        buff_dest[buff_count] = c;

        return (++buff_count);
}

/**
  prPercent - prints percentage
  @vars: list of arguments
  @buff: buffer
  @count:index of buffer pointer
Return: buffer index
*/
int prPercent(char *buff_dest, va_list vars, int buff_count)
{
        char c = va_arg(vars, int);

        c = '%';

        buff_dest[buff_count] = c;

        return(++buff_count);
}

/**
  prString - prints a string
  @a: list of arguments
Return: Number of chars printed
*/
int prString(char *buff_dest, va_list vars, int buff_count)
{
        char *str;
        int i = 0;


        str = va_arg(vars, char *);
if (str == NULL)
                str = "(null)";

        if (str[0] == '\0')
        {
                buff_dest[buff_count] = '\0';
                buff_count++;
        }

        while (str[i] != '\0')
        {
                buff_dest[buff_count] = str[i];
                i++;
                buff_count++;
        }

        return (buff_count);
}

