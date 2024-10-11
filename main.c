#include <stdio.h>

void test(int a) {

    printf("end of test\n");
}

int main() {
	int c=2, a, b=11;
	
	printf("ok 2024");
    test(34);
	++c;
	a=c+b*b;
    return 0;
}
