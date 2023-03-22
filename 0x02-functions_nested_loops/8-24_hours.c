#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute and hour of the time
 *
 */
void jack_bauer(void)
{
int hr;
int min;
for (hr = 0; hr <= 23; hr++)
{
for (min = 0; min <= 59; min++)
{
printf("%02d:%02d\n", hr, min);
}
}
}
