// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

double maxDeflect(double l,double h,double b,double w) {
    double e;
    cout<<"Enter the modulus of elasticity: ";
    cin>>e;
    return (4*w*l*l*l)/(e*b*h*h*h);
}

int main() {
    double dMax;
    double l,h,b,w;
    string material[3]={"Aluminium","Pine Wood","Steel"};

    for(int i=0;i<3;i++) {
        cout<<"------"<<material[i]<<"------\n";
        cout<<"Enter the length: "; cin>>l;
        cout<<"Enter the Height: "; cin>>h;
        cout<<"Enter the Base: "; cin>>b;
        cout<<"Enter the Weight: "; cin>>w;

        dMax = maxDeflect(l,h,b,w);

        cout<<"\nMaximum Deflection = "<<dMax<<"\n\n";
    }
    return 0;
}
