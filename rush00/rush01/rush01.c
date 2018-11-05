#include<unistd.h>
int		ft_putchar(char c)
{
		write(1, &c, 1);
		return(0);
}

int		letter(int a, int x, int y, int level)
{
	if (level == 1 || level == y)
	{
		if ((a == 1 && level == 1) || (a == x && level == y))	
			ft_putchar('A');	
		else
			ft_putchar('B');	
	}
	else
	{
		if (a == 1 || a == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
	return(0);
}

void	rectangle(int x, int y)
{
	int level;
	int a;
	
	level = 0;
	a = 0;
	while (++level <= y)
	{
		if (level == 1 || level == y)
		{
			while (++a <= x)
			{
				letter(a, x, y, level);
			}
		}
		else 
		{
			while (++a <= x)
			{
				letter( a, x, y, 0);
			}
		}	
	a = 0;
	ft_putchar('\n');
	}
}

int 	main()
{
		rectangle(5,3);	
		ft_putchar('\n');	
		rectangle(5,1);
		ft_putchar('\n');
		rectangle(1,1);
		ft_putchar('\n');
		rectangle(1,5);
		ft_putchar('\n');
		rectangle(4,4);
		return(0);
}
