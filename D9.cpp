#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    if(n==0){
        count=1;
    }
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count<<endl;
    //Another Approach
    // if(n>0){
    //     n=n/10;
    //     num=n;
    //     num=num%10;
    // }
    //cout<<num+1<<endl;
    return 0;
}