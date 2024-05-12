#include "algorithms.h"
#define SIZE_MAX 1000000
void bubbleSort(long long int v[SIZE_MAX], int n)
{
    for (int i = 0 ; i < n - 1 ; i++)
    {
        for (int j = 0 ; j < n - i - 1 ; j++)
        {
            if (v[j] > v[j + 1])
            {
                std::swap(v[j], v[j + 1]);
            }
        }
    }
}

int partition(long long int v[SIZE_MAX], int k, int n, long long int p){
    int i = k;
    int j = k;
    while( i <= n){
        if(v[i] > p){
            i++;
        }
        else{
            std::swap(v[i],v[j]);
            i++;
            j++;
        }
    }
    return j-1;
}

void quickSort(long long int v[SIZE_MAX], int k, int n)
{
    if(k < n){
        long long int p = v[n];
        int pos = partition(v, k, n, p);

        quickSort(v, k, pos-1);
        quickSort(v, pos+1, n);
    }
}

void insertionSort(long long int v[SIZE_MAX], int n)
{
    for (int i = 1 ; i < n ; i++)
    {
        long long int key = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }
}

int count[10];
void countSort(long long int v[SIZE_MAX], int n, int exp)
{
    long long int a[n];

    for (int i = 0; i < n; i++)
        count[(v[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        a[count[(v[i] / exp) % 10] - 1] = v[i];
        count[(v[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        v[i] = a[i];
}

void radixSort(long long int v[SIZE_MAX], int n)
{
    long long int maxim = 0;
    for(int i = 0 ; i < n ; i++)
        if(v[i] > maxim)
            maxim = v[i];
    for (int exp = 1; maxim / exp > 0; exp *= 10)
        countSort(v, n, exp);
}

void selectionSort(long long int v[SIZE_MAX], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int i_min = i;
        for (int j = i + 1 ; j < n ; j++)
            if (v[j] < v[i_min])
                i_min = j;

        std::swap(v[i_min], v[i]);
    }
}


