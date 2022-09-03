#include <stdbool.h>
#include <stdio.h>

bool check(int* v, int k)
{
    int size = 4;

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(v[i] + v[j] == k)
            {
                return true;
            }
        }
    }

    return false;
}

void main()
{
    int v[] = {10, 15, 3, 7};
    int k = 17;

    printf("%s", check(v, k) ? "True" : "False");
}