#include <stdio.h>
#include <ctime>
#include <thread>
#include <iostream>

// Const
#define THREADS 4
#define ARR_SIZE 200
int ret[THREADS];

// Function for thread.
void parallel_sum(int *arr, int thread_id)
{
    int s = ARR_SIZE / THREADS * thread_id, e = ARR_SIZE / THREADS * (thread_id + 1);
    
 printf("%d, %d\n", s, e);
    for (int i = s; i < e; i++)
        ret[thread_id] += arr[i];
}

int main()
{

    // Variable definitions
    int *arr = new int[ARR_SIZE];

    
    std::thread *threads = new std::thread[THREADS];

    for (int i = 0; i < ARR_SIZE; i++)
        arr[i] = 1;
    for (int i = 0; i < THREADS; i++)
        ret[i] = 0;
    long long int sum = 0;

    // Parallel sum start

    for (int i = 0; i < THREADS; i++)
        threads[i] = std::thread(parallel_sum, arr, i);
    for (int i = 0; i < THREADS; i++)
        threads[i].join();

    for (int i = 0; i < THREADS; i++)
        sum += ret[i];
    std::cout << "parallel sum = " << sum<<std::endl;
    // Parallel sum end

    sum = 0;

    // Sequential sum start

    for (int i = 0; i < ARR_SIZE; i++)
        sum += arr[i];

    std::cout << "Sequential sum = " << sum<<std::endl;
    // Sequential sum end

    return 0;
}
