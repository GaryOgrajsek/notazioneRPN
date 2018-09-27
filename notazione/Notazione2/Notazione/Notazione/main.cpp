#include <iostream>
#include "stack.h"
#include <string>
#include <stdlib.h>
using namespace std;

bool isBracketClosed(char character) {
	if (character == ')') {
		return true;
	}
	return false;
}

bool IsBracketOpen(char character) {
	//Controlla se il carattere è una parentesi
	if (character == '(') {
		return true;
	}
	return false;
}

bool IsOperator(char character) {

	//Controlla se il carattere è un operatore
	if (character == '+' || character == '*' || character == '-' || character == '/') {
		return true;
	}
	return false;
}

bool IsOperand(char myChar) {

	if ((myChar >= '0' && myChar <= '9') || (myChar >= 'a' && myChar <= 'z')) {
		return true;
	}
	return false;
}

double TrasformaLettere(char coso) {
	double tempValore;
	cout << "Inserire valore di " << coso << ": ";
	cin >> tempValore;
	return tempValore;
}

string Trasformazione(string op) {
	int i = 0;
	string copy;
	stackChar stack;
	InitC(stack);
	/*creazione di un secondo array da mandare in output.
	Creazione della stack.
	Creazione di variabili per puntare boh non so come dire*/
	unsigned int lung = int(op.length());
	while (i < lung) {
		if (op[i] == '(') {
			PushC(stack, '(');
		}
		else if (op[i] == '/' || op[i] == '-' || op[i] == '+' || op[i] == '*') {
			PushC(stack, op[i]);
		}
		else if (op[i] == ')') {
			copy += TopC(stack);
			PopC(stack);
			PopC(stack);
		}
		else if (isalpha(op[i])) {
			copy += op[i];
		}
		else {
			cout << "error" << endl;
		}
		i++;
	}
	/* Finché non si arriva al carattere terminatore, si inserirà nella stack le ( e gli operatori
	Si copiano i numeri e gli operatori quando si trova una (*/
	return copy;
}


int RisolviEspressioneRPN(string myString) {

	stack myStack;
	Init(myStack);

	int j = 0;
	int valoreFinale = 0;
	int temp;
	int temp2;
	int tempFin = 0;
	int myLength = myString.length();

	double tmp1=0;
	double tmp2=0;

	for (int j = 0; j<myLength; j++) {

		if (!(IsOperator(myString[j]))) {
			Push(myStack, TrasformaLettere(myString[j]));

		} else {
				temp = Top(myStack);
				Pop(myStack);
				temp2 = Top(myStack);
				Pop(myStack);
				switch (myString[j]) {

				case '+':
					tempFin += temp + temp2;
					Push(myStack, tempFin);
					break;

				case '-':
					temp = Top(myStack);
					Pop(myStack);
					valoreFinale += (Top(myStack) - temp);
					Pop(myStack);
					break;

				case '*':
					temp = Top(myStack);
					Pop(myStack);
					valoreFinale += (Top(myStack) * temp);
					Pop(myStack);
					break;

				case '/':
					temp = Top(myStack);
					Pop(myStack);
					valoreFinale += (Top(myStack) / temp);
					Pop(myStack);
					break;
				default:
					cout << "OPS";
					break;
				}
				valoreFinale = tempFin;
			}
		
	}
	return valoreFinale;
}



int main() {
	string input;
	cin >> input;
	string valutato = Trasformazione(input);
	cout << valutato << endl;
	cout << RisolviEspressioneRPN(valutato);
	system("PAUSE");
	return 0;
}
