#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
char cadena[128];
string array[10];
int i;
i=0;
ifstream fe("prueba.txt");

while(!fe.eof()) {
fe >> array[i];

i++;
}
//impre la posicion dos del arreglo
cout << array[2] << endl;
fe.close();
system("pause");
return 0;
}
