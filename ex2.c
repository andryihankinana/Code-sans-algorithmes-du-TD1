#include <stdio.h>
#include<stdlib.h>
void saisir(char *n);
void afficher(char *n);
void inserer(char *n);

void saisir( char *n)
{
    int i,d;
    int *t;

    d=atoi(n);

    printf("taille = ");
    scanf("%d",&d);

    for(i=0; i<d; i++)
    {
        scanf("%d",t+i);
    }
}

void afficher(char *n)
{
    int i,d;
    int *t;

    d=atoi(n);

    for(i=0;i<d;i++)
    {
        printf("%d ",*(t+i));
    }

    printf("\n");
}

void inserer(char *n)
{
    int i,d,x;
    int *t;

    d=atoi(n);

    printf("la valeur à inserer= ");
    scanf("%d",&x);

    i=d-1;

    while(i>=0 && *(t+i)>x)
    {
        *(t+i+1)=*(t+i);
        i--;
    }

    *(t+i+1)=x;

    d++;
}

int main(int argc,char *argv[])
{

    saisir(*(argv+1));

    afficher(*(argv+1));

    inserer(*(argv+1));

    afficher(*(argv+1));

    return 0;
}
