#include <iostream>
using namespace std;

int main()
{
   int month,year;
   cout<<"Enter month : "<<endl;
   cin>>month;
   cout<<"Enter year : "<<endl;
   cin>>year;
   int no_of_days;
   if(month==1 || month==3 || month == 5 || month ==7 || month==8 || month==10 || month==12){
       no_of_days=31;
   }
   else if(month==4 || month==6 || month==9 || month==11){
       no_of_days=30;
   }
   else if(month==2){
       if((year%400==0 && year%4==0) || year%100!=0)//Logic for Leap Year is Important
       {
           no_of_days=29;
       }
       else{
           no_of_days=28;
       }
   }
   cout<<no_of_days<<endl;
    
}