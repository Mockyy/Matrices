#include "Vecteur3.h"
#include <iostream>

using namespace std;

void Vecteur3::setX(int x)
{
	v[0] = x;
}

void Vecteur3::setY(int y)
{
	v[1] = y;
}

void Vecteur3::setZ(int z)
{
	v[2] = z;
}

int Vecteur3::getX() const
{
	return v[0];
}

int Vecteur3::getY() const
{
	return v[1];
}

int Vecteur3::getZ() const
{
	return v[2];
}

Vecteur3::Vecteur3()
{
	v[0] = 1;
	v[1] = 1;
	v[2] = 1;
}

Vecteur3::Vecteur3(int x, int y, int z)
{
	v[0] = x;
	v[1] = y;
	v[2] = z;
}

void Vecteur3::getVect()
{
	cout << v[0] << " " << v[1] << " " << v[2] << endl;
}

//Vecteur3 Vecteur3::prod(Matrice matrice)
//{
//	if (matrice.getX() == 3)
//	{
//		Vecteur3 res[3];
//
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				res->v[i] += matrice.getCellule(i, j) * v[j];
//			}
//		}
//		return *res;
//	}
//	else
//	{
//		cout << "Matrice incompatible" << endl;
//		return Vecteur3();
//	}
//}
