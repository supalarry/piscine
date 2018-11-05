#include <stdlib.h>
#include <stdio.h>

typedef struct  s_list
{

}               t_list;

int    **ft_array_creator(int width, int height)
{
    int     x;
    int     **array;

    x = 0;
    array = (int**)malloc(sizeof(int*) * (height));
    while (x < width)
    {
        array[x] = (int*)malloc(sizeof(int) * (width));
        x++;
    }
    return (array);
}

int    **ft_array_output(char *str, int **array, int width, int height)
{
    int y;
    int x;
    int z;

    y = 0;
    x = 0;
    z = 0;
    while (y < height)
    {
        while (x < width)
        {
            if (str[z] == '.')
                array[y][x] = 1;
            else if (str[z] == 'o')
                array[y][x] = 0;
            x++;
            z++;
        }
        x = 0;
        y++;
    }
    return (array);
}

int    **looper(int **array, int width, int height)
{
    int y; // level
    int x; // location horizontally
    int smallest;

    y = 0;
    x = 0;
    while (y < height)
    {
        while (x < width)
        {
            if (x == 0 || y == 0)
            {
                array[y][x] = array[y][x];
            }
            else
            {
                smallest = ft_smallest_integer(array[y-1][x], array[y-1][x-1], array[y][x-1]);
                array[y][x] = smallest + 1;
            }
        x++;
        }
        x = 0;
        y++;
    }
    return (array);
}

void    ft_array_print(int **array, width, height)
{
    int y;
    int x;

    y = 0;
    x = 0;
    while (y < height)
    {
        while (x < width)
        {
            printf("%d", array[y][x]);
            x++;
        }
        printf("%c", '\n');
    x = 0;
    y ++;
    }
}

int     main()
{
    int **array;
    int **array_output;
    int **array_output_looper;

    array = ft_array_creator(5, 5);
    array_output = ft_array_output("oo....o...o.....o...", array, 5, 5);
    ft_array_print(array_output, 5, 5);
    array_output_looper = array_output;
    looper(array_output_looper, 5, 5);
    printf("%c", '\n');
    ft_array_print(array_output_looper, 5, 5);
    return (0);
}

int     ft_smallest_integer(int a, int b, int c)
{
    int smallest;

    if (a <= b && a <=c)
    {
        smallest = a;
    }
    else if (b <= a && b <=c)
    {
        smallest = b;
    }
    else
    {
        smallest = c;
    }
    return (smallest);
}

