#include <iostream>
using namespace std;

int calculateHandhsake(int num){
    // int i=0;
    // int ans=0;
    // while(i!=num){
    //   num=num-i;
    //   ans=ans+num;
    //     i++;
    // }
    // return ans;
    return num*(num-1)/2;
}
int main()
{
    int num=10;
    cout<<"Total Handhakes : "<<endl;
    int ans=calculateHandhsake(num);
    cout<<ans;
    return 0;
}
