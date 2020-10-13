/* 
=========================================================
Autor: Montoya Martínez Rodrigo Xchel Aczayacatl
xchelxdx@comunidad.unam.mx
12 oct 2020
=========================================================
*/

#include<iostream>
#include<cstring>
#include<stdlib.h>

int main(){
	
	using namespace std;
	
	double x = 0, y = 0, z = 0;
	int m = 0, n = 0, k = 0;
	char op[2], rep[3], num1[50], num2[50];
	
	do{
		system("cls");
		cout << "Bienvenido a la Aczacalc-3000 \n\r Instrucciones de uso: \n\r"
			<< "Para comenzar, ingrese un número, después teclee +, -, *, / o % dependiendo de la operación a realizar \n\r"
			<< "Después ingrese un segundo número y se verificará si la operación puede o no realizarse. \n\r"
			<< "De ser resoluble, se mostrará el resultado por pantalla y se permitirá repetir el programa. \n\r" << endl;
		cout << "Ingresa el primer número: ";
		cin.getline(num1, 50);
		cin.ignore();
		x = atof(num1);
		if(x == 0 && strcmp(num1, "0") != 0){
			cout << "La entrada del primer número es inválida" << endl;
		}
		else{
			cout << "Escribe la operación a realizar: ";
			cin.getline(op, 2);
			cin.ignore();
			if(strcmp(rep, "+") == 0 || strcmp(rep, "-") == 0 || strcmp(rep, "*") == 0 || strcmp(rep, "/") == 0 || strcmp(rep, "%") == 0){
				cout << "El caracter de operación ingresado es inválido" << endl;
			}
			else{
				m = atoi(num1);
				if(strcmp(rep, "%")){
					if(m == 0){
						if(strcmp(num1, "0") != 0){
							cout << "La operación es inválida, solo se puede realizar la operación módulo entre enteros" << endl;
						}
					}
				}
				else{
					cout << "Ingresa el segundo número: ";
					cin.getline(num2, 50);
					cin.ignore();
					y = atof(num2);
					if(y == 0){
						if(strcmp(num2, "0") != 0){
							cout << "La entrada del segundo número es inválida" << endl;
						}
					}
					else{
						n = atoi(num2);
						if((strcmp(rep, "%") == 0 || strcmp(rep, "/") == 0) && n == 0 && strcmp(num2, "0") == 0){
							cout << "La operación es inválida, solo se puede realizar la división entre 0" << endl;
						}
						else{
							if(strcmp(rep, "%") == 0){
								if(n == 0){
									if(strcmp(num1, "0") != 0){
										cout << "La operación es inválida, solo se puede realizar la operación módulo entre enteros" << endl;
									}
								}
							}
							else{
								char aux = op[0];
								switch(aux){
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
									cout << "El resultado de la suma es: " << k << endl;
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
		}
		cout << "Para realizar una nueva operación escribe Si: ";
		cin.getline(rep, 3);
		cin.ignore();
		system("cls");
		system("pause");
	} while(strcmp(rep, "Si") == 0);
}
