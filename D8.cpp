#include <iostream>
using namespace std;
#include<math.h>
int main()
{
    float a,b,c;
    cout<<"Enter values of a,b and c : "<<endl;
    cin>>a>>b>>c;
    float z=sqrt(b*b-4*a*c);
    float root1=((-b+z)/(2*a));
    float root2=((-b-z)/(2*a));
    if(z==0){
        root1=(-b/2*a);
        root2=root1;
    }
    if(z==0){
        cout<<"Roots are equal"<<endl;
        cout<<"Root1 = Root2 = "<<root1<<endl;
    }
    else{
        cout<<"Root1 = "<<root1<<endl;
        cout<<"Root2 = "<<root2<<endl;
    }
    return 0;
}