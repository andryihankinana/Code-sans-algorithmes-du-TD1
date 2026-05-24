#include <stdio.h>
#include<stdlib.h>
void saisir(char *n);
int test_magique(char *n);
void afficher(int test);

void saisir(char *n)
{
    int i,j,d;
    d=atoi(n);


    int t[d][d];


    for(i=0; i<d; i++)
    {
        for(j=0; j<d; j++)
        {
            scanf("%d", &t[i][j]);
        }
    }
}

int test_magique(char *n)
{
    int i,j,d;
    int somme;
    int s=0;

    d=atoi(n);
    int t[d][d];

    for(j=0; j<d; j++)
    {
        s += t[0][j];
    }

    for(i=0; i<d; i++)
    {
        somme = 0;

        for(j=0; j<d; j++)
        {
            somme += t[i][j];
        }

        if(somme != s)
        {
            return 0;
        }
    }

    for(j=0; j<d; j++)
    {
        somme = 0;

        for(i=0; i<d; i++)
        {
            somme += t[i][j];
        }

        if(somme != s)
        {
            return 0;
        }
    }

    return 1;
}

void afficher(int test)
{
    if(test==1)
    {
        printf("C'est un carre magique\n");
    }
    else
    {
        printf("ce n'est pas un carré magique\n");
    }
}

int main(int argc, char *argv[])
{
    int test;

    saisir(*(argv+1));

    test = test_magique(*(argv+1));

    afficher(test);

    return 0;
}
