#ifndef _RADICAL_H
#define _RADICAL_H
#include "fraction.h"
#include <stdbool.h>

typedef struct {
	Fraction out;
	int in;
} Radical;                  //二次根式

typedef struct Node Node;
typedef Node* Polynomial;   //链表（算式）
struct Node {
	Radical num;
	Polynomial next;
};


//tool
Radical initRad(int up, int down, int in);
void printRad(Radical a);
Radical Radsqrt( int radicand );
Radical  sqrtFrac(Fraction a);               //分数开方
void printPoly(Polynomial ptrl);
int cmpRad(Radical a, Radical b);
bool isequalRad(Radical a, Radical b);

//calculation
Radical divRad(Radical a, Radical b);
Radical mulRad(Radical a, Radical b);
Polynomial addRad(Polynomial ptrl, Radical b);
Polynomial subRad(Polynomial ptrl, Radical b);
int gcdPoly(Polynomial ptrl);
Polynomial _PolyIntReduce(Polynomial ptrl, int* x);

//list
Polynomial initPoly();
void destoryPoly(Polynomial* ptrl);
int lenPoly(Polynomial ptrl);
Polynomial findPoly(Radical x, Polynomial ptrl);
Polynomial findkthPoly(int k, Polynomial ptrl);
Polynomial insertPoly(Radical x,int i, Polynomial ptrl );
Polynomial deletePoly(int i, Polynomial ptrl);

#endif
