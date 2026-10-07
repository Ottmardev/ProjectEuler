#include <stdio.h>
#define MIN 100
#define MAX 999

int main(int argc, char *argv[])
{
    int i, j, k, num, uni, dec, cen, mil, dil, cil, res;
    res = 0;
    for (i = MIN; i <= MAX; i++) {
	for (j = MIN; j <= MAX; j++) {
	    num = j * i;
	    k = num;
	    cil = k / 100000;
	    k -= cil * 100000;
	    dil = k / 10000;
	    k -= dil * 10000;
	    mil = k / 1000;
	    k -= mil * 1000;
	    cen = k / 100;
	    k -= cen * 100;
	    dec = k / 10;
	    k -= dec * 10;
	    uni = k;
	    if (cil == 0) {
		if (uni == dil && dec == mil && num > res) {
		    res = num;
		}
	    } else {
		if (uni == cil && dec == dil && cen == mil && num > res) {
		    res = num;
		}
	    }
	}    
    }
    printf("The largest palindrome product of 3 digit numbers is: %d\n", res);
    return 0;
}
