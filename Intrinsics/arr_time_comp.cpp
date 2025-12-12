#include<iostream>
#include<immintrin.h>
#include<cstdlib>
#include<chrono>

int main() {
    srand(unsigned(time(0)));
    const int n = 1<<26;
    float* A = (float*)_aligned_malloc(32, n*sizeof(float));
    float* B = (float*)_aligned_malloc(32, n*sizeof(float));

    for(int i = 0; i < n; i++) {
        A[i] = rand() % 100;
        B[i] = rand() % 100;
    }
    std::cout << "\n Scalar Addition of real and imaginary numbers : ";
    auto start_s = std::chrono::high_resolution_clock::now();
    float sum_r = 0;
    float sum_i = 0;
    for(int i = 0; i<n; i++) {
        sum_r += A[i];
        sum_i += B[i];
    }
    std::cout << "\nSum of real numbers : " << sum_r;
    std::cout << "\nSum of imaginary numbers : " << sum_i;
    auto end_s = std::chrono::high_resolution_clock::now();
    auto dur_s = std::chrono::duration<double, std::milli>(end_s - start_s).count();
    std::cout << "\nTime taken for scalar computation : " << dur_s << " ms";    return 0;
}