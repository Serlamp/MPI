#ifndef MPI_LISTGEN_H
#define MPI_LISTGEN_H

#include <iostream>
#include <random>
#include <chrono>

#define SIZE_MAX 1000000

void makeListRandom(long long int v[SIZE_MAX], int size);
void makeListAsc(long long int v[SIZE_MAX], int size);
void makeListDesc(long long int v[SIZE_MAX], int size);

#endif //MPI_LISTGEN_H
