#include "main.h"
/**
*jack_bauer - printing every minute and hour of a day
*Return- nothing else
*/
void jack_bauer(void)
{
	int h, m;

	h = 0;
	while (h < 24)
	{
		m = 0;
			while (m < 60)
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
				_putchar(':');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				_putchar('\n');
				m++;
			}
		h++;
	}
}
