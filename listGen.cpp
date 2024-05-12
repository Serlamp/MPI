#include "listGen.h"

#define SIZE_MAX 1000000

void makeListRandom(long long int v[SIZE_MAX], int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        v[i] = rand();
    }
}

void makeListAsc(long long int v[SIZE_MAX], int size)
{
    v[0] = rand();
    for(int i = 1 ; i < size ; i++)
    {
        int nr = rand();
        while(nr < v[i - 1])
        {
            nr = rand();
        }
        v[i] = nr;
    }

}

void makeListDesc(long long int v[SIZE_MAX], int size)
{
    v[0] = rand() * 100;
    for(int i = 1 ; i < size ; i++)
    {
        int nr = rand();
        while(nr > v[i - 1])
        {
            nr = rand();
        }
        v[i] = nr;
    }
}