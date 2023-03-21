#include "main.h"

/**
 *  _islower - checks if a letter is in lower case or not
 *
 *  
 * Return:  0 or 1
 */

int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	return(0);
}
