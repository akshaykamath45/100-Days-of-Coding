#include <iostream>
using namespace std;

int main(){
    float x1,x2,y1,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2;
    x3=(x1*y2)+(x2*y1);
    y3=(y1*y2);
    float x4=x3/y3;
    cout<<x3<<"/"<<y3<<endl;
    cout<<x4<<"/"<<1<<endl;
    
    return 0;    
}
