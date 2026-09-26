#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned long num = 600851475143;
    unsigned long i, j;
   
    for (i = num; i > 0; i = i - 1) {
	for (j = i; j > 1;j = j - 1) {
	    if ((i%j) == 0){
		printf("Primo: %ld\n", j);
	    }
	}
    }
}
