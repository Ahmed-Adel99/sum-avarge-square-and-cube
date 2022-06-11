#include <iostream>
using namespace std;
int main() {

    float x,y,z,l,m,sum;
    cout << "enter the five numbers";
    cin>>x>>y>>z>>l>>m;
    sum=x+y+z+l+m;
    cout<<"the sum is"
        <<sum;
    int sum2;
    sum2=x*x+y*y+z*z+l*l+m*m;
            cout<<"\nsum of square is " <<sum2;
        int sum3;
           sum3=x*x*x+y*y*y+z*z*z+l*l*l+m*m*m;
             cout<<"\nsum of cube is " <<sum3;
    return 0;
}
