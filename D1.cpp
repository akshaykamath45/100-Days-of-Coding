#include <iostream>
using namespace std;

int main()
{
    char c;
    cin>>c;
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        cout<<"Vowel"<<endl;
    }
    else if(c>='A'&&c<='Z' || c>='a' && c<='z'){
        cout<<"Consonant"<<endl;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }

    return 0;
}
