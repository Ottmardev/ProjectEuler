#include <stdio.h>
#define NUMS 20

int main(int argc, char *argv[])
{
    int i, j, num;
    num = 1;
    for (i = 1; i <= NUMS; i++) {
	if (num % i != 0) {
	    for (j = 2; j <= i; j++) {
		if (j == i) {
		    num *= i;
		    break;
		}else if ((num * j) % i == 0) {
		    num *= j;
		    break;
		}
	    }	
	}else {
	}
    }
    printf("The smallest number is: %d\n", num);
    return 0;
}
