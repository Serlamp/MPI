#ifndef MPI_ALGORITHMS_H
#define MPI_ALGORITHMS_H
#include <iostream>
#include <random>
#include <chrono>
#define SIZE_MAX 1000000
void bubbleSort(long long int v[SIZE_MAX], int n);
void quickSort(long long int v[SIZE_MAX], int k, int n);
void insertionSort(long long int v[SIZE_MAX], int n);
void radixSort(long long int v[SIZE_MAX], int n);
void selectionSort(long long int v[SIZE_MAX], int n);
#endif //MPI_ALGORITHMS_H
