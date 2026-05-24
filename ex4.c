#include <stdio.h>
#include<stdlib.h>
void saisir(char *n1,char *n2);
void supprimert2(char *n1,char *n2);
void afficher(char *n1);


void saisir(char *n1,char *n2)
{
    int i,a,b;
    int *t1,*t2;

    a=atoi(n1);
    b=atoi(n2);

    printf("entrer les elements de t1:");

    for(i=0;i<a;i++)
    {
        scanf("%d",t1+i);
    }

    printf("entrer les elements de t2:");

    for(i=0;i<b;i++)
    {
        scanf("%d",t2+i);
    }
}

void supprimert2(char *n1,char *n2)
{
    int i,j,a,b,k;
    int *t1,*t2;

    a=atoi(n1);
    b=atoi(n2);



    for(i=0;i<a;i++)
    {
	    for (int j=0 ;j<b ; j++)
	    {

       		 if(*(t1+i)==*(t2+j))
       		 {
           		 for(k=i;k<a-1;k++)
           		 {
               			 *(t1+k)=*(t1+k+1);
            		 }

            		a--;

           		 i--;
		 }
           }
    }
}

/*void supprimerT2(int *t1,int *n1,int *t2,int n2)
{
    int i;

    for(i=0;i<n2;i++)
    {
        supprimer(t1,n1,*(t2+i));
    }
}*/

void afficher(char *n1)
{
    int i,a;
    int *t;

    a=atoi(n1);

    printf("le tableau :");

    for(i=0;i<a;i++)
    {
        printf("%d ",*(t+i));
    }

    printf("\n");
}

int main(int argc,char *argv[])
{

    saisir(*(argv+1),*(argv+3));
    afficher(*(argv+1));
    afficher(*(argv+2));

    supprimert2(*(argv+1),*(argv+3));

    afficher(*(argv+1));

    return 0;
}
