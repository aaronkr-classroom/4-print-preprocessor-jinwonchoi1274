#pragma once


//clac.c
#include <stdio.h>
#include <math.h>//M_PI�� ���� �־�������� ������


#ifndef M_PI //���� ���ǵ��� �ʾ�����
#define M_PI 3.1415926535
#endif

#ifndef MATH_FUNC_H
#define MATH_FUNC_H



//�Լ� ���� �����ϱ�
double sum(double value1, double value2);
double sub(double value1, double value2);
double mul(double value1, double value2);
double div(double value1, double value2);
int rem(int value1, int value2);

//�߰� �Լ�
double power(double base, double exponent);
double squareRoot(double num);
double areaOfcircle(double radius);
double circumferenceOfCircle(double radius);
#endif