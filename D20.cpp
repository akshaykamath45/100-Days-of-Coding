#include <iostream>
using namespace std;


int main(){
   int n;
   cin>>n;
   for(int i=2;i<n;i++){
       if(n%i==0){
           cout<<n<<" is not a prime number"<<endl;
           break;
       }
       else{
           cout<<n<<" is a prime number"<<endl;
           break;
       }
   }
   if(n==1){
       cout<<"1 is not a prime number"<<endl;
   }
}


