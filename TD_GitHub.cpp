//Fonctions réalisées par l'étudiant 1 :
bool estMajeur(int age)
{
	if (age >= 18)
		{
			return true;
		}
	else
		{
			return false;
		}

}

int exposant(int nbre, int exp)
{
	int resultat;

	resultat = nbre^exp;

	return resultat;

}

float TVA(int prix)
{
	float resultat;

	resultat = prix *0,196;

	return resultat;
}


int plusGrand(int a, int b, int c)
{
	int i;
	int pg;

	for (i = 0; i < 3; i++)
	{
		if (i == 0) {
			pg = a;
		}
		else if (b > pg)
		{
			pg = b;
		}
		else if (c > pg) 
		{
			pg = c;
		}
	}
	return pg;

}




//Fonctions réalisées par l'étudiant 2 :










//Fonctions réalisées par l'étudiant 3 :
