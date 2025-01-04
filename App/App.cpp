#include <iostream>
#include "Calc.h"
using namespace std;

int main()
{
	int va, vb;

	cout << "Digite dois valores: ";
	cin >> va >> vb;

	cout << "Soma: " << soma(va, vb) << endl;
	cout << "Mult: " << mult(va, vb) << endl;
}