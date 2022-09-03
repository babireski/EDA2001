#include <stdio.h>

void print(int *v, int s)
{
    printf("{");

    for(int i = 0; i < s; i++)
    {
        if(i) printf(",");
        printf("%i", v[i]);
    }

    printf("}");
}

void multiply(int *v, int *r, int s)
{
    for(int i = 0; i < s; i++)
    {
        r[i] = 1;

        for(int j = 0; j < s; j++)
        {
            if(j != i)
            {
                r[i] = r[i] * v[j];
            }
        }
    }
}

void main()
{
    int v[] = {1, 2, 3, 4, 5};
    int s = sizeof(v) / sizeof(int);
    int r[s];

    multiply(v, r, s);
    print(r, s);
}