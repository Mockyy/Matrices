#include <iostream>
#include "Matrice.h"
#include "Vecteur3.h"

using namespace std;

//Fonction indépendante
Vecteur3 prod(Matrice matrice, Vecteur3 vecteur)
{
	//Pour multiplier deux matrices, le nombre de colonne de la première doit être égale au nombre de lignes de la deuxième
	if (matrice.getX() == 3)
	{
		Vecteur3 res[3];

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				//Calcul
				res->v[i] += matrice.getCellule(i, j) * vecteur.v[j];
			}
		}
		return *res;
	}
	else
	{
		cout << "Matrice incompatible" << endl;
		return Vecteur3();
	}
}

int main()
{
	Matrice mat1(2, 3, 1);

	mat1.affiche();

	Vecteur3 vect1(3, 4, 3);

	cout << "Vecteur : ";
	vect1.getVect();

	Vecteur3 resultat = prod(mat1, vect1);

	cout << "Resultat : ";
	resultat.getVect();

	system("Pause");
}

