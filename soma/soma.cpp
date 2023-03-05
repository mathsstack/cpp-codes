#include<iostream>

using namespace std;

int main() {


	int soma = 0;

	while( true ) {

		int valor;
		cout << "Type a number: ";
		cin >> valor;

		if(valor < 0) break;

		soma += valor;

	}

	cout << "\nA soma vale " << soma;
}


