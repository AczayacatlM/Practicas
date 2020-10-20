/* 
=========================================================
Autor: Montoya Martínez Rodrigo Xchel Aczayacatl
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
		<< "Para comenzar, ingrese un número, después teclee +, -, *, / o % dependiendo de la operación a realizar \n\r"
		<< "Después ingrese un segundo número y se verificará si la operación puede o no realizarse. \n\r"
		<< "De ser resoluble, se mostrará el resultado por pantalla y se permitirá repetir el programa. \n\r" << endl;
	system("pause");
	do{
		system("cls");
		cout << "Ingresa el primer número: ";
		cin.getline(num1, 50);
		cin.ignore();
		double x = atof(num1);
		if(x == 0 && strcmp(num1, "0") != 0){
			cout << "La entrada del primer número es inválida" << endl;
		}
		else{
			cout << "El número ingresado es: " << x << endl; 
			cout << "Escribe la operación a realizar: " <<endl;
			op = cin.get();
			cin.ignore();
			if(op == 37 || op == 42 || op == 43 || op == 45 || op == 47){
				cout << "La operación a realizar es: " << op << endl;
				int m = atoi(num1);
				if(op == 37 && m == 0 && strcmp(num1, "0") != 0){
					cout << "La operación es inválida, solo se puede realizar la operación módulo entre enteros" << endl;
				}
				else{
					cout << "Ingresa el segundo número: ";
					cin.getline(num2, 50);
					cin.ignore();
					double y = atof(num2);
					if(y == 0){
						if(strcmp(num2, "0") != 0){
							cout << "La entrada del segundo número es inválida" << endl;
						}
					}
					else{
						int n = atoi(num2);
						if((op == 37 || op == 47) && n == 0 && strcmp(num2, "0") == 0){
							cout << "La operación es inválida, solo se puede realizar la división entre 0" << endl;
						}
						else{
							if(op == 37 && n == 0 && strcmp(num1, "0") != 0){
								cout << "La operación es inválida, solo se puede realizar la operación módulo entre enteros" << endl;
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
									cout << "El resultado de la multiplicación es: " << z << endl;
									break;
								case '/':
									z = x / y;
									cout << "El resultado de la división es: " << z << endl;
									break;
								case '%':
									k = m % n;
									cout << "El resultado del módulo es: " << k << endl;
									break;
								default:
									cout << "¡Felicidades, has encontrado un bug!" << endl;
									break;
								}
							}
						}
					}
				}
			}
			else{
				cout << "El caracter de operación ingresado es inválido: " << op << endl;
			}
		}
		cout << "Para realizar una nueva operación escribe Si: ";
		cin.getline(rep, 3);
		cin.ignore();
		system("cls");
	} while(strcmp(rep, "Si") == 0 || strcmp(rep, "si") == 0 || strcmp(rep, "SI") == 0 || strcmp(rep, "S") == 0 || strcmp(rep, "s") == 0);
	
	system("pause");
	return 0;
}
