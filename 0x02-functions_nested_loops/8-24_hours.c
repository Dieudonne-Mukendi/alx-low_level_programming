#include "holberton.h"
/**
 * jack_bauer - A function who prints every minute of the day
 * from 00:00 to 23:59
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void jack_bauer(void)
{
	int h, hh, m, s;

	for (h = 0; h < 3; h++)
	{
		for (hh = 0; hh < 10; hh++)
		{
			for (m = 0; m < 6; m++)
			{
				for (s = 0; s < 10; s++)
				{
					if (!(h == 2 && hh >= 4))
					{
						_putchar(h + 48);
						_putchar(hh + 48);
						_putchar(58);
						_putchar(m + 48);
						_putchar(s + 48);
						_putchar('\n');
					}
				}
			}
		}
	}
}
