#ifndef PUNTO2D_H
#define PUNTO2D_H

class Punto2D {
public:
	Punto2D();
	~Punto2D();
	
	void SetPosicion(double x, double y);
	void Trasladar(double trasEjeX, double trasEjeY);
	void RotarRespectoAlOrigen(double angulo);
	void Escalar(double escEjeX, double escEjeY);
	double GetX();
	double GetY();
	
private:
	double punto[2];
};

#endif

