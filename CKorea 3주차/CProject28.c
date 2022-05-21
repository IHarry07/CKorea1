
#include <stdio.h>

void Print2(int num){

}

int main28(){
	int num = 2147483647;
	int *pNum = &num;
	// 포인터 기호는 *
	// 주소의 기호는 &
	// 변수앞에 *을 붙이면 역참조(주소로 값을 사용한다)
	*pNum; // num의 값(역참조)
	printf("%d\n", *pNum);

	return 0;
}
// 자료형 앞에 오는(변수 선언시에 오는) *은 포인트 변수선언(주소를 저장하는 공간을 생성)
// 변수 사용시 변수 앞에 붙이는 *은 역참조(해당 주소의 값을 가져온다)
// & : 주소참조 (주소값을 가져온다)
// 포인터 : 주소에 접근하는기술