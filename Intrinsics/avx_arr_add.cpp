#include<iostream>
#include<ctime>
#include<immintrin.h>
#include<cstdlib>

using namespace std;

int main() {
    const int size = 8;
    srand(unsigned(time(0)));
    float a[size], b[size], c_scalar[size], c_avx[size];
    for(int i = 0; i < size; i++) {
        a[i] = (rand() % 100) / 10.0f;
        b[i] = (rand() % 100) / 10.0f;
        c_scalar[i] = a[i] + b[i];
    }

    __m256 vec_a = _mm256_loadu_ps(a);
    __m256 vec_b = _mm256_loadu_ps(b);
    __m256 vec_c = _mm256_add_ps(vec_a, vec_b);
    _mm256_storeu_ps(c_avx, vec_c);
    
    std::cout << "Array A :\t";
    for(float x : a) std::cout << x << "\t";
    std::cout << "\nArray B :\t";
    for(float x : b) std::cout << x << "\t";
    std::cout << "\nScalar Addition Result :\t";
    for(float x : c_scalar) std::cout << x << " ";      
    std::cout << "\nAVX Addition Result :\t";
    for(float x : c_avx) std::cout << x << " ";
    return 0;
}