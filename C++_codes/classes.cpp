#include<bits/stdc++.h>
using namespace std;

struct room {
    float len, wid;
};

class room_dim {
    public:
        struct room R; //structure variable
        //float l = R.len;
        //float b = R.wid;
        float l,b;
        room_dim() {
            cout<<"Hi!!\n";
        }
        room_dim(float l, float b) {
            cout<<"Length of room (in metres): "<<l<<endl;
            cout<<"Breadth of room (in metres): "<<b<<endl;
            cout<<"Area of room (in sq.metres): "<<l*b;
        }

        bool lhigh() { //object functions
            if(l>25) return true;
            return false;
        }
        //void cal_area (float l, float b) {
        //    cout<<"Area of room is : "<<l*b<<" sq.m";
        //}
        //room_dim(string name) {
        //    cout<<"Welcome " << name << "!!\n";
        //}
};

int main() {
    //room_dim Room("Netra Srinivasan"); //class object
    float a,b;
    cout<<"Enter length of room (in metres):";
    cin>>a;
    cout<<"\nEnter width of room (in metres):";
    cin>>b;
    room_dim hi;
    room_dim Room(a,b);
    cout<<endl<<Room.lhigh();
    //Room.l = a;
    //Room.b = b;
    //Room.cal_area(a,b);
    return 0;
}