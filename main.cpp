#include <iostream>
#include <chrono>
#include "listGen.h"
#include "algorithms.h"

using namespace std::chrono;
#define SIZE_MAX 1000000

int sizes[7] = {10000,15000,30000,100000,250000, 750000, 100000};
long long int a[SIZE_MAX];


int main() {
    //long long int nr = 0;

    for(int i = 0 ; i < 7 ; i++)
    {
        makeListRandom(a, sizes[i]);

        auto start = high_resolution_clock::now();
        bubbleSort(a, sizes[i]);
        auto stop  =high_resolution_clock::now();
        auto duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Bubble Sort pe un tablou aleatoriu de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;
        start = high_resolution_clock::now();
        quickSort(a, 0 ,sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Quick Sort pe un tablou aleatoriu de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;
        start = high_resolution_clock::now();
        insertionSort(a, sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Insertion Sort pe un tablou aleatoriu de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;
        start = high_resolution_clock::now();
        radixSort(a, sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Radix Sort pe un tablou aleatoriu de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;
        start = high_resolution_clock::now();
        selectionSort(a, sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Selection Sort pe un tablou aleatoriu de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;

        makeListAsc(a, sizes[i]);

        start = high_resolution_clock::now();
        bubbleSort(a, sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Bubble Sort pe un tablou crescator de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;
        start = high_resolution_clock::now();
        quickSort(a, 0 ,sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Quick Sort pe un tablou crescator de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;
        start = high_resolution_clock::now();
        insertionSort(a, sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Insertion Sort pe un tablou crescator de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;
        start = high_resolution_clock::now();
        radixSort(a, sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Radix Sort pe un tablou crescator de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;
        start = high_resolution_clock::now();
        selectionSort(a, sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Selection Sort pe un tablou crescator de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;

        makeListDesc(a, sizes[i]);

        start = high_resolution_clock::now();
        bubbleSort(a, sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Bubble Sort pe un tablou descrescator de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;
        start = high_resolution_clock::now();
        quickSort(a, 0 ,sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Quick Sort pe un tablou descrescator de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;
        start = high_resolution_clock::now();
        insertionSort(a, sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Insertion Sort pe un tablou descrescator de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;
        start = high_resolution_clock::now();
        radixSort(a, sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Radix Sort pe un tablou descrescator de "<<sizes[i]<<" elemente este "<< duration.count();
        std::cout << std::endl;
        start = high_resolution_clock::now();
        selectionSort(a, sizes[i]);
        stop  =high_resolution_clock::now();
        duration = duration_cast<seconds>(stop - start);
        std::cout << "Durata de sortare pentru Selection Sort pe un tablou descrescator de "<<sizes[i]<<" elemente este "<< duration.count();

    }

    return 0;
}
