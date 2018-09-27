#include "stack.h"  //essendo creato da noi vanno le virgolette, se fosse una libreria presente nel codice vanno le <>

// definisce le funzioni presenti in stack.h
void Init(stack &mioStack) {
	mioStack.iTop = -1;
} //inizializza iTop a -1 per ricominciare a mettere roba nella stack da sotto

void Push(stack &mioStack, int x) {
	mioStack.iTop++;
	mioStack.elem[mioStack.iTop] = x;
} //aumenta iTop e mette in quella posizione x

void Pop(stack &mioStack) {
	mioStack.iTop--;
} //decrementa iTop

int Top(stack mioStack) {
	return mioStack.elem[mioStack.iTop];
} //ritorna l'elemento in posizione massima in quel momento

bool Full(stack mioStack) {
	return (mioStack.iTop == (DIM - 1));
} //se iTop è maggiore a DIM, ovvero punta oltre la dimensione della stack, essa è piena

bool Empty(stack mioStack) {
	return (mioStack.iTop == -1);
} //se iTop è -1, ovvero punta "sotto" alla stack, essa è vuota


  // definisce le funzioni presenti in stack.h
void InitC(stackChar &mioStack) {
	mioStack.iTopC = -1;
} //inizializza iTop a -1 per ricominciare a mettere roba nella stack da sotto

void PushC(stackChar &mioStack, char x) {
	mioStack.iTopC++;
	mioStack.elemC[mioStack.iTopC] = x;
} //aumenta iTop e mette in quella posizione x

void PopC(stackChar &mioStack) {
	mioStack.iTopC--;
} //decrementa iTop

int TopC(stackChar mioStack) {
	return mioStack.elemC[mioStack.iTopC];
} //ritorna l'elemento in posizione massima in quel momento

bool FullC(stackChar mioStack) {
	return (mioStack.iTopC == (DIM - 1));
} //se iTop è maggiore a DIM, ovvero punta oltre la dimensione della stack, essa è piena

bool EmptyC(stackChar mioStack) {
	return (mioStack.iTopC == -1);
} //se iTop è -1, ovvero punta "sotto" alla stack, essa è vuota