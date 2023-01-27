#include <iostream>
using namespace std;

int main()
{
    char c;
    cin>>c;
    if(c>='A' && c<='Z' || c>='a' && c<='z'){
        cout<<"Alphabet"<<endl;
    }
    else{
        cout<<"Not an Alphabet"<<endl;
    }

    return 0;
}
