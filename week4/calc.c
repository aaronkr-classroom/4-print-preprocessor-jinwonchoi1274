//clac.c
#include <stdio.h>
//#include <math.h>//M_PI는 여기 있어야하지만 없으면
#include "calc.h"	//직접 만든 .h 파일은 큰따옴표






//더하기
double sum(double value1, double value2) {
	return value1 + value2;
}

//빼(sub)
double sub(double value1, double value2) {
	return value1 - value2;
}
//곱하기(mul)
double mul(double value1, double value2) {
	return value1 * value2;
}
//나누기(div)
double div(double value1, double value2) {
	if(value2 != 0)return value1 / value2;
	else {
		printf("Error: Divide by 0!");
		return 0;
	}
}

//나머지(rem)
int rem(int value1, int value2) {
	if (value2 != 0) return value1 % value2;
	else
		printf("Error: Divide by 0!");
		return 0;
}
//제곱
double power(double base, double exponent) {
	return pow(base, exponent); //pow() 함수

}
//제곱근
double squareRoot(double num) {
	if (num >= 0)
		return sqrt(num);
	else {
		printf("Error:Negative number!");
		return -1;
	}
}
//넓이
double areaOfcircle(double radius) {
	return M_PI * radius * radius; //m_PI 정의해야됨

}
//둘레
double circumferenceOfCircle(double radius) {
	return 2 * M_PI * radius;
}



