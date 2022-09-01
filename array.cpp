#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string>
using namespace std;
void leer();
int main(){
	leer();
	return 0;
}
void leer(){
	ifstream archivo[40];
	string texto;

	archivo.open("programacion.txt",ios::in);
	if(archivo.fail()){
		cout<<"no se encontro el archivo";
		exit(1);
	}
	while(!archivo.eof()){
		getline(archivo,texto[i]);
		cout<<texto<<endl;
               fin>>texto[i];
	}
	archivo.close();

}
