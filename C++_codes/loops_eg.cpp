#include<iostream>
using namespace std;

double power(double b, int e) {
    double res = 1;
    for(int i = 1; i<=e; i++) {
        res *= b;
    }
    return res;
}

int main() {
    cout<<power(3.567,4);
    return 0;
}