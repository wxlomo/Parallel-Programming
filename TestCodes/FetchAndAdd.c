/*
  Used to test the 
*/
#include <stdio.h>

void main(void){
	int t = 0;
	printf("%d + 1 = ", __sync_fetch_and_add(&t, 1));
	printf("%d\n", t);
	printf("%d + 2 = ", __sync_fetch_and_add(&t, 2));
	printf("%d\n", t);
	printf("%d - 1 = ", __sync_fetch_and_sub(&t, 1));
	printf("%d\n", t);
	printf("%d - 2 = ", __sync_fetch_and_sub(&t, 2));
	printf("%d\n", t);
	printf("%d - 1 = ", __sync_fetch_and_sub(&t, 1));
	printf("%d\n", t);
}
