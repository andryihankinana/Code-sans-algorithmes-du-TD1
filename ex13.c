#include <stdio.h>
#include<stdlib.h>
void pascal(char *n);


void pascal(char *n)
{
    printf ("le triangle de pascal");
    int d=atoi(n);
    int t[d][d];
    int i,j;

    for(i=0; i<d; i++)
    {
        for(j=0; j<=i; j++)
        {
            if(j==0 || j==i)
            {
                t[i][j]=1;
            }
            else
            {
                t[i][j]=t[i-1][j-1]+t[i-1][j];
            }
        }
    }

    for(i=0; i<d; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%d ", t[i][j]);
        }

        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    pascal(*(argv+1));

    return 0;
}
