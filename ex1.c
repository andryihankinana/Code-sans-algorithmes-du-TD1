/*ALGORITHME pair_impair
VARIABLE
	i,j,n,t[i],tps:entier
DEBUT
   	AFFICHER("Etrer la taille du tableau: ");
        LIRE(n)
	POUR(i<-0 , i<n , i<-i+1)ALORS
    	  AFFICHER("T[",i,"] = ")
          LIRE(t[i])
    	FINPOUR

    	POUR(i<-0, i<n, i<-i+1)ALORS
    	  AFFICHER( t[i])
        FINPOUR


        AFFICHER("Pairs : ")

    	POUR(i<-0 , i<n , i<-i+1)ALORS
          SI(t[i]%2<-<-0)
            AFFICHER("%d ", t[i]);
          FINSI
        FINPOUR

    	AFFICHER("\nImpairs : ");
        POUR(i<-0 , i<n , i<-i+1)ALORS
          SI(t[i]%2!<-0)
            AFFICHER("%d ", t[i]);
          FINSI
    	FINPOUR

	POUR(int i<-0 , i<n -1 , i<-i+1)ALORS
		POUR( int j<-i+1 , j<n , j++)ALORS
			SI(t[i]%2!<-0)
				tps<-t[i]
				t[i]<-t[j]
				t[j]<-tps
			FINSI
		FINPOUR
	FINPOUR
FIN
*/				



#include <stdio.h>
#include<stdlib.h>
void saisir(int n);
void afficher(int n);
void pair_impair(int n);
void resultat(int n);

void saisir(int n)
{
    int i;
    int *t;

    printf("Entrer la taille du tableau:");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("T[%d] = ", i);
        scanf("%d", t+i);
    }
}

void afficher(int n)
{
    int i;
    int *t;

    for(i=0; i<n; i++)
    {
        printf("%d ", *(t+i));
    }

    printf("\n");
}

void pair_impair(int n)
{
    int i;
    int *t;

    printf("Pairs : ");

    for(i=0; i<n; i++)
    {
        if(*(t+i)%2==0)
        {
            printf("%d ", *(t+i));
        }
    }

    printf("\nImpairs : ");

    for(i=0; i<n; i++)
    {
        if(*(t+i)%2!=0)
        {
            printf("%d ", *(t+i));
        }
    }

    printf("\n");
}

void resultat(int n)
{
	int i,j,tps;
	int *t;

	for(int i=0 ; i<n -1; i++)
	{
		for( int j=i+1 ; j<n ; j++)
		{
			if(*(t+i)%2!=0)
			{
				tps=*(t+i);
				*(t+i)=*(t+j);
				*(t+j)=tps;
			}
		}
	}
}
				

int main(int argc, char *argv[])
{
	int d=atoi(*(argv+1));

	saisir(d);
    
    	afficher(d);

    	pair_impair(d);
    	resultat(d);
    	afficher(d);

    	return 0;
}
