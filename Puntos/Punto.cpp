#include <cmath>
#include "Punto.h"

Punto2D::Punto2D() {
	
}

Punto2D::~Punto2D() {
	
}

void Punto2D::SetPosicion(double x, double y) {
	
	punto[0] = x;
	punto[1] = y;
}

void Punto2D::Trasladar(double trasEjeX, double trasEjeY) {
	
	double xPrima = GetX() + trasEjeX;
	double yPrima = GetY() + trasEjeY;
	SetPosicion(xPrima, yPrima);
}

void Punto2D::RotarRespectoAlOrigen(double angulo) {
	
	angulo = angulo * 3.1415926535897932/180;
	double xPrima = GetX()*cos(angulo) - GetY()*sin(angulo);
	double yPrima = GetY()*cos(angulo) + GetX()*sin(angulo);
	SetPosicion(xPrima, yPrima);
}

void Punto2D::Escalar(double escEjeX, double escEjeY){
	
	double xPrima = GetX()*escEjeX;
	double yPrima = GetY()*escEjeY;
	SetPosicion(xPrima, yPrima);
}

double Punto2D::GetX(){
	
	return punto[0];
}

double Punto2D::GetY(){
	
	return punto[1];
}
