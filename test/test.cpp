#include<stdio.h>
#include <stdlib.h>
#include "gperftools/heap-profiler.h"

void test_func1(void)
{
	HeapProfilerStart("./test.prof");
	for(int i = 0; i < 10000000; i++) {
		void *ptr = malloc(32);
	}
	HeapProfilerStop();
}

void test_func2(void)
{
	test_func1();
}

int main(void)
{
	test_func2();	
	return 0;
}
