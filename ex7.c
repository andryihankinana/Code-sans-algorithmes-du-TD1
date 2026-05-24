#include <stdio.h>
void compter(char *ch);
char saisir();

char saisir()
{
    char *ch;
    printf("Texte : ");
    scanf ("%s",ch);
    return *ch;
}

void compter(char *ch)
{
    int i;

    int *na=0;
    int *nes=0;

    for(i=0;*(ch+i)!='\0';i++)
    {
        if(*(ch+i)=='a')
        {
            (*na)++;
        }

        if(*(ch+i)=='e' && *(ch+i+1)=='s')
        {
            (*nes)++;
        }
    }

    printf("Nombre de a = %d\n",*na);
    printf("Nombre de es = %d\n",*nes);
}

int main(int argc,char *argv[])
{
    int *t;

    saisir();

    compter(*(argv + 1));

    return 0;
}
