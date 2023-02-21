#include <stdio.h>

/**
 * jack_bauer - 24 hours counting
 *
 */

int main(void)
{
	int hour;
	int hour2 = 0;
	int minute = 0;
	int second = 0;

	for (hour = 0; hour <= 5; hour++)
	{
		for (; second <= 9; second++)
		{
			putchar(second + '0');
			putchar(hour + '0');
		}
	}
}



