//1 미터를 입력 받아 몇 야드인지 나타내시오(단, 1 야드 = 0.914 m)
#include <stdio.h>

void main()
{
	double m;
	double y;

	printf("미터를 입력하시오 \n");
	scanf_s("%lf", &m);
	y = m / 0.914;

	printf("%lf 미터 = %lf 야드 \n", m, y);


}
-----------------------------------------------------------------------------
// 입력 받은수 5제곱을하시오.
#include <stdio.h>

void main()
{
	int a, res;

	printf("정수를 입력하십시오 \n");
	scanf_s("%d", &a);
	res = a * a * a * a * a;
	printf("%d의 5제곱 = %d\n", a, res);
}
------------------------------------------------------------------------------
//가로 세로 높이를 입력 받아 직육면체의 부피를 구하시오.
#include <stdio.h>

void main() {
	int a, b, c, bupi;

	printf("가로 세로 높이를 입력하시오\n");
	scanf_s("%d %d %d", &a, &b, &c);
	bupi = a * b * c;
	printf("부피: %d\n", bupi);
}
---------------------------------------------------------------------------------
// Pi를 3.141592로 define하고, 반지름을 입력 받아 원의 넓이를 계산하시오.
#include <stdio.h>
#define Pi 3.141592

void main()
{
	int r;
	double area;

	printf("반지름을 입력하시오 \n");
	scanf_s("%d", &r);
	area = Pi * r * r;
	printf("원의 면적 : %.3lf \n", area);
}
--------------------------------------------------------------------------------
//입력 받은 5개의 숫자의 평균을 구하시오.
#include <stdio.h>

void main() {
	int a, b, c, d, e;
	double res;

	printf("정수 5개를 입력하십시오 \n");
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	res = (a + b + c + d + e) /5;
	printf("%lf \n",res);
}
------------------------------------------------------------------------------
// 화씨를 입력 받아 섭씨로 전환하기 (단, C = (F -32)/1.8)

#include <stdio.h>

void main() {
	double C; //섭씨
	double F; //화씨

	printf("온도(˚F)를 입력하시오. \n");
	scanf_s("%lf", &F);
	C = (F - 32) / 1.8;
	printf("%lf˚C ", C);
}
--------------------------------------------------------------------------------
//'인자가 있는 매크로'를 이용하여 구의 부피를 정의하고 , 지구 크기와 달크기의 차이와 비(몇 배)를 계산하시오
// 지구 반지름:6378m, 달 반지름 1737m, 구의 체적 = (4/3)pi r^3

#include <stdio.h>
#define VOLUME(r) (4.0/3.0 * 3.14 * (r)*(r)*(r))

void main() {
	double e;
	double m;
	double r;
	r = 6378;
	e = VOLUME(r);
	printf("지구의 크기는 %.1lf km 입니다.\n",e);
	r = 1737;
	m = VOLUME(r);
	printf("달의 크기는 %.1lf km 입니다.\n", m);
	printf("지구와 달의 크기차이는 %.1lf km 이면서 \n 약 %.1lf 배 정도의 비율로 차이난다. ", e - m, e / m);
}
-------------------------------------------------------------------------------------
// 표준입력으로 두 정수를 입력 받아 합과 평균을 구하여 출력하는 프로그램을 작성하시오.
// 합은 정수로 평균은 실수로 출력

#include <stdio.h>

void main() {
	int a, b;
	
	printf("두 정수를 입력하시오\n");
	scanf_s("%d %d", &a, &b);
	printf("합 : %d + %d = %d \n", a, b, a + b);
	double res;
	res = (a + b) / 2;
	printf("평균 : %d / 2 = %lf", a + b,res );
}
------------------------------------------------------------------------------------