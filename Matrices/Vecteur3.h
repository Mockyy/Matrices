#pragma once
#include "Matrice.h"

class Vecteur3
{
public:

	int v[3];

public:

	void setX(int x);
	void setY(int y);
	void setZ(int z);

	int getX() const;
	int getY() const;
	int getZ() const;

	Vecteur3();
	Vecteur3(int x, int y, int z);

	void getVect();

	//tentative de fonctions amies 

	//friend Vecteur3 prod(Matrice matrice, Vecteur3 vecteur);
	//Vecteur3 prod(Matrice matrice);	//fonction membre
};

