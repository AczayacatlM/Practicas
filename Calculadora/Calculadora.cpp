/* 
=========================================================
Autor: Montoya Mart�nez Rodrigo Xchel Aczayacatl
xchelxdx@comunidad.unam.mx
12 oct 2020
=========================================================
*/

#include<iostream>
#include<cstring>
#include<cstdlib>

int main(){
	
	using namespace std;
	
	char op, rep[3], num1[50], num2[50];
	
	cout << "Bienvenido a la Aczacalc-3000 \n\r Instrucciones de uso: \n\r"
		<< "Para comenzar, ingrese un n�mero, despu�s teclee +, -, *, / o % dependiendo de la operaci�n a realizar \n\r"
		<< "Despu�s ingrese un segundo n�mero y se verificar� si la operaci�n puede o no realizarse. \n\r"
		<< "De ser resoluble, se mostrar� el resultado por pantalla y se permitir� repetir el programa. \n\r" << endl;
	system("pause");
	do{
		system("cls");
		cout << "Ingresa el primer n�mero: ";
		cin.getline(num1, 50);
		cin.ignore();
		double x = atof(num1);
		if(x == 0 && strcmp(num1, "0") != 0){
			cout << "La entrada del primer n�mero es inv�lida" << endl;
		}
		else{
			cout << "El n�mero ingresado es: " << x << endl; 
			cout << "Escribe la operaci�n a realizar: " <<endl;
			op = cin.get();
			cin.ignore();
			if(op == 37 || op == 42 || op == 43 || op == 45 || op == 47){
				cout << "La operaci�n a realizar es: " << op << endl;
				int m = atoi(num1);
				if(op == 37 && m == 0 && strcmp(num1, "0") != 0){
					cout << "La operaci�n es inv�lida, solo se puede realizar la operaci�n m�dulo entre enteros" << endl;
				}
				else{
					cout << "Ingresa el segundo n�mero: ";
					cin.getline(num2, 50);
					cin.ignore();
					double y = atof(num2);
					if(y == 0){
						if(strcmp(num2, "0") != 0){
							cout << "La entrada del segundo n�mero es inv�lida" << endl;
						}
					}
					else{
						int n = atoi(num2);
						if((op == 37 || op == 47) && n == 0 && strcmp(num2, "0") == 0){
							cout << "La operaci�n es inv�lida, solo se puede realizar la divisi�n entre 0" << endl;
						}
						else{
							if(op == 37 && n == 0 && strcmp(num1, "0") != 0){
								cout << "La operaci�n es inv�lida, solo se puede realizar la operaci�n m�dulo entre enteros" << endl;
							}
							else{
								int k = 0;
								double z = 0;
								switch(op){
								case '+':
									z = x + y;
									cout << "El resultado de la suma es: " << z << endl;
									break;
								case '-':
									z = x - y;
									cout << "El resultado de la resta es: " << z << endl;
									break;
								case '*':
									z = x * y;
									cout << "El resultado de la multiplicaci�n es: " << z << endl;
									break;
								case '/':
									z = x / y;
									cout << "El resultado de la divisi�n es: " << z << endl;
									break;
								case '%':
									k = m % n;
									cout << "El resultado del m�dulo es: " << k << endl;
									break;
								default:
									cout << "�Felicidades, has encontrado un bug!" << endl;
									break;
								}
							}
						}
					}
				}
			}
			else{
				cout << "El caracter de operaci�n ingresado es inv�lido: " << op << endl;
			}
		}
		cout << "Para realizar una nueva operaci�n escribe Si: ";
		cin.getline(rep, 3);
		cin.ignore();
		system("cls");
	} while(strcmp(rep, "Si") == 0 || strcmp(rep, "si") == 0 || strcmp(rep, "SI") == 0 || strcmp(rep, "S") == 0 || strcmp(rep, "s") == 0);
	
	system("pause");
	return 0;
}
