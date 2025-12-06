//to check if length is valid via getter and setter fucntions

#include<bits/stdc++.h>
using namespace std;

class room {
    float length; //private by default
    public:
        float breadth;
        //room(float len, float bre){
        //    length = len;
        //    breadth = bre;
        //    cout<<"Length given : "<<length<<endl;
        //    cout<<"Breadth given : "<<breadth<<endl;
        //}
        void check(float len) { //did getter and setter works in a single function
            if(len>0) {
                length = len; //setting a private variable
                cout<<"Length assigned!!"<<length<< " has no issues"<<endl; //getting and printing variable
            }
            else {
                cout<<"Invalid length"<<len<<endl;
            }
        }
};

class room2 : public room {
    public:
    void check_b(float bre) {
        if(bre>0) {
            breadth = bre;
            cout<<"Breadth assigned!!"<<breadth<< " has no issues"<<endl;
        }
        else {
            cout<<"Invalid breadth"<<bre<<endl;
        }
    }
};

int main() {
    room R;
    R.check(-90);
    room2 R2;
    R2.check(3);
    R2.check_b(-7);
    return 0;
}