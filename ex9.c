#include <stdio.h>
#include <stdbool.h>


int test_carre(char *ch)
{
    int nombre_de_lettre,i=0;
    int compteur=0;
    bool carre = true;

    while(*(ch+i)!='\0')
    {
	    compteur++;
    }

    nombre_de_lettre = compteur;

    if(nombre_de_lettre%2!=0)
    {
        carre = false;
    }

    for(int i=0 ; i<nombre_de_lettre/2 ; i++)
    {
        if(*(ch+i) != *(ch+i+nombre_de_lettre/2))
        {
            carre = false;
        }
    }

    carre = true;
    return carre;
}

void afficher(bool carre)
{
    if(carre)
    {
        printf("Carree\n");
    }
    else
    {
        printf("Non carree\n");
    }
}

int main(int argc,char *argv[])
{
    bool carre;

    carre = test_carre(*(argv+1));

    afficher(carre);

    return 0;
}
