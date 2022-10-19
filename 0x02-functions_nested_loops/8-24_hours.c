#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Return
 */
void jack_bauer(void)
{
	int h_tens, h_unit, h_unit_limit, m_tens, m_unit;

	h_unit_limit = 57;
	for (h_tens = 48; h_tens <= 50; h_tens++)
	{
		for (h_unit = 48; h_unit <= h_unit_limit; h_unit++)
		{
			if (h_tens == 50)
			{
				h_unit_limit = 51;
			}
			for (m_tens = 48; m_tens <= 53; m_tens++)
			{
				for (m_unit = 48; m_unit <= 57; m_unit++)
				{
					_putchar(h_tens);
					_putchar(h_unit);
					_putchar(':');
					_putchar(m_tens);
					_putchar(m_unit);
					_putchar('\n');
				}
			}
		}
	}
}
