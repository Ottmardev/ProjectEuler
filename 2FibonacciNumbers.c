#include <stdio.h>

int main(int argc, char *argv[])
{
     unsigned long a, b;
     a = 1;
     b = 0;

     unsigned long sum, fib;

     for (fib = 1; fib < 4000000; fib = fib) {
	 fib = b + a;
	 b = a;
	 a = fib;

	 if ((fib%2) == 0){
	     sum = sum + fib;
	    printf("%d, %d\n", fib, sum);
	    //sum = sum + fib;
	 }
	 //b = a;
	 //a = fib;
     }
     printf("El valor obtenido es: %ld \n", sum);
}
