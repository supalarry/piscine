#include<unistd.h>
int		ft_putchar(char c)
{
		write(1, &c, 1);
		return(0);
}

int		letter(int z, int a, int x)
{
	if (z == 1)
	{
		if (a == 1 || a == x)	
			ft_putchar('o');	
		else
			ft_putchar('-');	
	}
	else
	{
		if (a == 1 || a == x)
			ft_putchar('|');
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
				letter(1, a, x);
			}
		}
		else 
		{
			while (++a <= x)
			{
				letter(0, a, x);
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
