#include <stdio.h>
void saisir(char *n);
void supprimer(char *n);
void afficher(char *n);

void saisir(char *n)
{
    int i,d;
    int *t;

    d=atoi(n);

    printf("la taille du tableau= ");
    scanf("%d",&d);

    for(i=0;i<*n;i++)
    {
        scanf("%d",t+i);
    }
}

void supprimer(char *n)
{
    int i,j,d,x;
    int *t;
    d=atoi(n);

    printf("entrer la valeur à effacer:");
    scanf("%d",&x);

    for(i=0;i<d;i++)
    {
        if(*(t+i)==x)
        {
            for(j=i;j<d-1;j++)
            {
                *(t+j)=*(t+j+1);
            }

            d--;

            i--;
        }
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

int main(int argc,char *argv[])
{

    saisir(*(argv+1));
    afficher(*(argv+1));

    supprimer(*(argv+1));

    afficher(*(argv+1));

    return 0;
}
