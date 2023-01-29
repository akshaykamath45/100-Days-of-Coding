#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    do{
        int temp=n%10;//Important
        sum=sum+temp;
        n=n/10;
        
    }while(n>0);

    cout<<sum;
    return 0;
}
