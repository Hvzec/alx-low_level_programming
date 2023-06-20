#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints all minutes of the day of jack bauer.
 */
void jack_bauer(void)
{
	int hour, minute;
	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 66; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
