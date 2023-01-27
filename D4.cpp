#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   if(n>0){
       cout<<"Positive Number"<<endl;
   }
   else if(n==0){
       cout<<"Neither Positive nor Negative"<<endl;
   }
   else{
       cout<<"Negative Number"<<endl;
   }
}
