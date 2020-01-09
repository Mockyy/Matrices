#include "Matrice.h"
#include <iostream>

using namespace std;

void Matrice::setX(int x)
{
	nX = x;
}

void Matrice::setY(int y)
{
	nY = y;
}

int Matrice::getX() const
{
	return nX;
}

int Matrice::getY() const
{
	return nY;
}

int Matrice::getCellule(int i, int j) const
{
	return nTab[j + nY * i];
}

Matrice::Matrice()
{
	nX = 1;
	nY = 1;
	nTab[1] = 1;
}

Matrice::Matrice(int lines, int columns, int filled)
{
	nX = lines;
	nY = columns;
	int val;

	for (int i = 0; i < nX * nY; i++)
	{
		if (filled == 1)
		{
			cout << "Entrez une valeur : " << endl;
			cin >> val;
			nTab[i] = val;
		}
		else
		{
			nTab[i] = i;
		}
	}
}

void Matrice::affiche()
{
	for (int i = 0; i < nX; i++)
	{
		for (int j = 0; j < nY; j++)
		{
			cout << nTab[j + nY * i] << " ";
		}

		cout << " " << endl;
	}
}