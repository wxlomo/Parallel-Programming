/*
  FetchAndAdd.c
  Creator : Weixuan Yang
  Used to test the atomic functions fetch_and_add and fetch_and_sub.
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
	printf("%d - 2 = ", __sync_fetch_and_sub(&t, 2));
	printf("%d\n", t);
	printf("%d + 1 = ", __sync_fetch_and_add(&t, 1));
	printf("%d\n", t);
	printf("%d - 2 = ", __sync_fetch_and_sub(&t, 2));
	printf("%d\n", t);
	printf("%d + 3 = ", __sync_fetch_and_add(&t, 3));
	printf("%d\n", t);
}
