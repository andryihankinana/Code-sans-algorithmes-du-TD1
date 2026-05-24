#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void saisir(char *n);
float moyenne(char *n);
int proche(char *n);
void afficher(float m,int p);


void saisir(char *n)
{
    int i,d;
    int *t;

    d=atoi(n);

    printf("entrer les elements du tableau:");

    for(i=0;i<d;i++)
    {
        scanf("%d",t+i);
    }
}

float moyenne(char *n)
{
    int i,d,s=0;
    int *t;
    d=atoi(n);

    for(i=0;i<d;i++)
    {
        s += *(t+i);
    }

    return (float)s/d;
}

int proche(char *n)
{
    int i,d,p;
    float m;
    int *t;

    m=moyenne(n);
    d=atoi(n);

    for(i=1;i<d;i++)
    {
        if(fabs(*(t+i)-m)<fabs(*(t+i+1)-m))
        {
            p=*(t+i);
        }
    }

    return p;
}

void afficher(float m,int p)
{
    printf("Moyenne = %.2f\n",m);
    printf("Plus proche = %d\n",p);
}

int main(int argc,char *argv[])
{
    float m;
    int p;

    saisir(*(argv+1));

    m = moyenne(*(argv+1));

    p = proche(*(argv+1));

    afficher(m,p);

    return 0;
}
