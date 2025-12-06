#include<iostream>
using namespace std;

void guess() {
    int n = 6;
    int num;
    int guess_c = 1;
    while(n != num && guess_c<=3) {
        guess_c++;
        cout<<"Enter a number (1-20) : ";
        cin>>num;
        
        if(n==num) {
            cout<<"Correct number guessed!\n";
            return;
        }
        else if(n<num) {
            cout<<"Greater!!\n";
        }
        else {
            cout<<"Lesser!!\n";
        }
    }
    if(guess_c>3) {
        cout<<"You lose!!\n";
    }
}

int main() {
    guess();
    return 0;
}