#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            // cout<<i<<endl;
            sum=sum+i;
        }
        
    }
    cout<<"Sum of Factors is :"<<sum<<",Hence it is ";;
    if(sum==n){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not a Perfect Number";
    }
    return 0;    
}
