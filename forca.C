#include <iostream>
using namespace std;

int tam = 0, vida = 3, ganhou = 0;

void setup(string a);

void verifica(char let, string a, string b);

void imprime(string b);

int main(void){

	string a;
	char let;
	cout << "Insira a palavra a ser advinhada\n";
	cin >> a;
	system("clear");
	tam = a.size();
	string b = a;
	setup(b);
	while((a != b) || (vida !=0)){
		imprime(b);
		cout << "Insira a letra: ";
		cin >> let;
		verifica(let, a, b);
	}
	if(vida == 0){
		cout << "Que pena! Voce perdeu...";
	}
	else{
		cout << "Parabens! Voce ganhou!";
	}


	return (0);
}

void setup(string a){
	for(int i = 0; i < tam; i++){
		a[i] = '-';
	}
}

void imprime(string b){
	system("clear");
		cout << b;
	cout << "\n Voce ainda tem" << vida << "vidas\n";
}

void verifica(char let, string a, string b){
	int aux = 0;
	for(int i = 0; i < tam; i++){
		if(a[i] == let){
			b[i] = let;
			aux++;
		}
	}
	if(aux == 0){
		vida--;
	}
}





