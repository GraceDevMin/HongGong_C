#include <stdio.h>

int main(void) {
	unsigned int a;

	a = 4294967295;	//큰 양수 저장
	printf("%d\n", a);	//%d로 출력(부호있음으로 간주)
	a = -1;	//음수 저장
	printf("%u\n", a);	//%u로 출력(부호비트 고려X)
	
	/* unsigned 자료형은 항상 양수만 저장하고 %u로 출력!!*/
}