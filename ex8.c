#include <stdio.h>
char saisir_bigramme(char *ch);
int compter(char *ch,char *bg);
void afficher(int nb);

char saisir_bigramme(char *ch)
{
    char *bg;
    printf("Bigramme : ");
    scanf("%s",bg);
    return *bg;
}

int compter(char *ch,char *bg)
{
    int i;
    int nb=0;

    for(i=0;*(ch+i+1)!='\0';i++)
    {
        if(*(ch+i)==*bg && *(ch+i+1)==*(bg+1))
        {
            nb++;
        }
    }

    return nb;
}

void afficher(int nb)
{
    printf("Occurrences = %d\n",nb);
}

int main(int argc,char *argv[])
{
    int nb;
    char *bg;

    *bg = saisir_bigramme(*(argv+1));

    nb = compter(*(argv+1),bg);

    afficher(nb);

    return 0;
}
