#include <stdio.h>
#define NUMS 100

int main(int argc, char *argv[])
{
    int sumSqr, sqrSum, i, difere;

    sumSqr = 0;
    sqrSum = 0;

    for (i = 1; i <= NUMS; i++) {
	sumSqr += i*i;
	sqrSum += i;
    }

    sqrSum *= sqrSum;
    difere = sqrSum - sumSqr;

    printf("The difference is: %d\n", difere);
    return 0;
}
