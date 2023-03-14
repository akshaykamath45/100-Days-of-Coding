#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void reverseString(char s[]){
    int i=0;
    int j=strlen(s)-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}

int main()
{
    char s[50];
    cout<<"Enter a string : "<<endl;
    cin.getline(s,50);
    reverseString(s);
    cout<<"After reversing,the string is : "<<s<<endl;

    return 0;
}