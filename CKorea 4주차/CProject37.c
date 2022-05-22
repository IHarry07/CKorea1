#include <stdio.h>

typedef struct MyStruct {
	char name[64];
	int age;
} MS;

int main37() {
	// 변수 : 값을 담는 기술(저장공간)
	// 포인터 : 변수의 주소값을 담는기술(함수도 가능)

	// 변수
	char 문자 = 'a';
	int 정수 = 23;
	float 실수 = 3.14f;
	MS 구조체변수 = { "홍길동",23};

	printf("%d\n", 정수);

	// 포인터변수
	char* 문자열 = "안녕하세요";
	char* 문자주소 = &문자;
	int* 정수주소 = &정수;
	float* 실수주소 = &실수;
	MS* 구조체변수주소 = &구조체변수;

	printf("%p\n", 정수주소);
	printf("%d\n", *정수주소);         // 정수

	// 일반변수         
	문자 = 'd';
	정수 = 1;
	실수 = 3.3f;

	printf("%d\n", 정수);

	// 역참조 (혹은 사용)
	*문자주소 = 'b';
	*정수주소 = 333;
	*실수주소 = 314.01f;
	(*구조체변수주소).age = 999;

	printf("%d\n", 정수);

	*정수주소 = (*정수주소)++;

	printf("%d\n", 정수);

	return 0;

}