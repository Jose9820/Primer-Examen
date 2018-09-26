#include <iostream>

using namespace std;

int main (){
	int N, valor;
	cout << "Cantidad de datos: ";
	cin >> N;
	cout << endl;
	int *arregloDeDatos= new int [N];
	for(int i=0; i< N; i++){
		cout << "Ingrese el valor " << i+1 << " : ";
		cin >> *(arregloDeDatos+i);
	}
	cout << "\nDatos agregados....\n";
	cout << endl;
	//primer recorrido
 	for (int i=0; i<N; i++){
	cout << "valor " << i+1 << " : " << *(arregloDeDatos+i) << endl;
	}
	//segundo recorrido
	cout << endl;
	for (int i=N-1; i>= 0; i--){
	cout << "valor " << i+1 << " : " << *(arregloDeDatos+i) << endl;
	}	
	delete [] arregloDeDatos;
	return 0;
}
