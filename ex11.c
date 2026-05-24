#include <stdio.h>
int voyelle(char c);
void decrypter(char *ch);

int voyelle(char c)
{
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y');
}

void decrypter(char *ch)
{
    int i=0;

    printf("Texte normal : ");

    while(*(ch+i)!='\0')
    {
        printf("%c", *(ch+i));

        if(!voyelle(*(ch+i))
            && *(ch+i+1)=='I'
            && *(ch+i+2)=='T')
        {
            i += 3;
        }
        else
        {
            i++;
        }
    }

    printf("\n");
}

int main(int argc, char *argv[])
{
    decrypter(*(argv+1));

    return 0;
}
