#ifndef _FRACTION_H
#define _FRACTION_H

#include "structs.h"
#define Fraction0() initFrac(0, 1)
#define FractionN(up) initFrac(up, 1)
#define Fraction(up, down) initFrac(up, down)
#define EE initFrac(0, 0)
#define iszeroFrac(a) ((a).up == 0 ? 1 : 0)
//数学
int gcd(int a, int b);						//最大公因数
long long lgcd(long long a, long long b);
int lcm(int a, int b);						//最小公倍数
int qpow(int base, int expt);				//快速幂

//工具
Fraction initFrac(int up ,int down);       //初始化
void fixsignFrac(Fraction* a);				//符号修正、错误处理
void reduceFrac(Fraction* a);				//分数约分
void reduce(int* a, int* b);              //数约分
void printFrac(Fraction a, char* end);    //打印
int cmpFrac(Fraction a, Fraction b);       //比较 返回-1 , 0 , 1
Fraction c(char myope, ...);               //运算器

//运算
Fraction addFrac(Fraction a, Fraction b);	//加法
Fraction subFrac(Fraction a, Fraction b);	//减法
Fraction mulFrac(Fraction a, Fraction b);	//乘法
Fraction divFrac(Fraction a, Fraction b);	//除法
Fraction powFrac(Fraction a, int expt);		//乘方
Radical sqrtFrac(Fraction a);               //开方

#endif

