#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
  int i=0;

  char linea[10];
  char dat[10][10]={""};

  ifstream MiArchivo;

  MiArchivo.open("Lista.txt");


  if (!MiArchivo.fail())
  {
    while (!MiArchivo.eof() )
    {
      MiArchivo.getline(linea,sizeof(linea));
      cout << linea << endl;
      strcpy(dat[i],linea);
      i++;
    }
    MiArchivo.close();
  }
  else
   printf ("No se pudo abrir el archivo.");
  getch();
}
