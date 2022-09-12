#include <time.h>
#include <stdlib.h>

/**
 * main-Prints a random number and states whether
 * weather is positive , negative or zero
 * Return 0
*/
int main(void)
srand(time(0));

n = rand() - RAND_MAX / 2;

  /* your code goes there */

if (n > 0)

{

		printf("%i is positive\n", n);

}

else if (n == 0)

{

		printf("%i is zero\n", n);

}

else if (n < 0)

{

		printf("%i is negative\n", n);

}

return (0);

}
