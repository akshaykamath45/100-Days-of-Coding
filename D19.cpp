#include <iostream>
using namespace std;
#include <math.h>

int main(){
   int n;
   cin>>n;
   int rem=0;
   int on=n;//Original Number-->on
   int arm;//Armstrong Number;
   while(on!=0){
       rem=on%10;
       arm=arm+pow(rem,3);
       on=on/10;
   }
   if(arm==n){
       cout<<"Armstrong Number";
   }
   else{
       cout<<"Not an Armstrong Number";
   }
    return 0;    
}

