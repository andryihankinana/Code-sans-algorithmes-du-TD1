#include <stdio.h>
int voyelle(char c);
void crypter(char *ch);

int voyelle(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
    {
        return 1;
    }

    return 0;
}

void crypter(char *ch)
{
    int i;

    printf("Cryptee : ");

    for(i=0; *(ch+i)!='\0'; i++)
    {
        printf("%c", *(ch+i));

        if(!voyelle(*(ch+i)) && voyelle(*(ch+i+1)))
        {
            printf("IT");
        }
    }

    printf("\n");
}

int main(int argc, char *argv[])
{

    crypter(*(argv+1));

    return 0;
}
