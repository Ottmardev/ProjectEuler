#include <stdio.h>

#define NUM 600851475143L
#define PRIMO 2

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    while (b != 0) {
	unsigned long long temp = b;
	b = a % b;
	a = temp;
    }
    return a;
}

int main(int argc, char *argv[])
{
    unsigned long long i, j, k, x;

    //Probando con Pollard's rho algorithm
    i = PRIMO;
    k = 1;
    x = NUM;

    do {
	j = i;
	k = 1;
	while (k == 1) {   
	    i = ((i*i) - 1) % x;
	    j = (((((j*j) - 1)*((j*j) - 1)) % x) + 1) % x;
	    if (i-j >= 0) {
		k = gcd((i-j), x);
	    }else {
		k = gcd((j-i), x);
	    }
	    if (j == k) {
		break;
	    }
	}
	if (j == k) {
	    break;
	}
	x /= k;
	i = k;
    }while (1);

    printf("%lld\n", x);
    return 0;
}
