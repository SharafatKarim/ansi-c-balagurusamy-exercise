#include <stdio.h>
#include <time.h>

int main()
{
    time_t t; // not a primitive datatype
    time(&t);

    printf("\n Current date and time is: %s", ctime(&t));

    return 0;
}
