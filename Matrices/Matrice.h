#pragma once
#include "Vecteur3.h"

class Matrice
{
private:

	int nX;
	int nY;
	int nTab[100];

public:

	void setX(int x);
	void setY(int y);

	int getX() const;
	int getY() const;
	int getCellule(int i, int j) const;

	//constructeurs
	Matrice();
	Matrice(int lines, int columns, int filled);

	//friend Vecteur3 Vecteur3::prod(Matrice matrice);

	void affiche();
};

