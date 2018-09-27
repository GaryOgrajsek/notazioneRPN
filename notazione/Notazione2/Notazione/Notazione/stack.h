#pragma once

#define DIM 100

struct stack{
 //struct che definisce come � fatta la stack
	int elem[DIM];
	int iTop;
};

//nel file header si pu� omettere il nome delle variabili

void Init(stack &); //passato per riferimento con la &. Porta iTop a -1
void Push(stack &, int); //iTop++, mette elemento x
void Pop(stack &); //iTop--
int Top(stack); //output elemento massimo
bool Full(stack); //dice se � pieno (iTop==DIM)
bool Empty(stack); //dice se � vuoto (iTop==-1)

struct stackChar{
	char elemC[DIM];
	char iTopC;
};

void InitC(stackChar &); //passato per riferimento con la &. Porta iTop a -1
void PushC(stackChar &, char); //iTop++, mette elemento x
void PopC(stackChar &); //iTop--
int TopC(stackChar); //output elemento massimo
bool FullC(stackChar); //dice se � pieno (iTop==DIM)
bool EmptyC(stackChar); //dice se � vuoto (iTop==-1)