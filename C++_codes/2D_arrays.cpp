#include<bits/stdc++.h>
using namespace std;

int main() {
    int mat1[2][3] = {{1,2,3}, {4,5,6}};
    int mat2[2][3] = {{2,3,4}, {5,6,7}};
    if((sizeof(mat1[0]) != sizeof(mat2[0])) || sizeof(mat1) != sizeof(mat2)) {
        cout<<"Unequal matrix sizes!!";
        return 1;
    } 
    int res[2][3];
    for(int i=0; i<sizeof(mat1)/sizeof(mat1[0]); i++) {
        for(int j = 0; j<sizeof(mat1[0])/sizeof(mat1[0][0]); j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout<<"Printing matrix sizes : \n";
    for(int i=0; i<sizeof(mat1)/sizeof(mat1[0]); i++) {
        cout<<endl;
        for(int j = 0; j<sizeof(mat1[0])/sizeof(mat1[0][0]); j++) {
            cout<<res[i][j]<<"\t";
        }
    }
    return 0;
}