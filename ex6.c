#include <stdio.h>
#include <string.h>
int palindrome(char *ch);
void afficher(int v);



int palindrome(char *ch)
{
    int i=0;
    int j=strlen(ch)-1;

    while(i<j)
    {
        if(*(ch+i)!=*(ch+j))
        {
            return 0;
        }

        i++;
        j--;
    }

    return 1;
}

void afficher(int v)
{
    if(v)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Non palindrome\n");
    }
}

int main(int argc,char *argv[])
{
    int v;

    v = palindrome(*(argv+1));

    afficher(v);

    return 0;
}
