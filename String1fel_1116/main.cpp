#include <iostream>
#include<sting>
using namespace std;


int main()
{
    string str="korte";
    cout << "Kerem a szoveget";
    cin>> str;
    int n=str.size();
    char elso=str[n-1];
    for(int i=n-1; i>0;i--){
        str[i]=str[i-1];
    }
    str[0]=elso ;
    cout<<str ;


    return 0;
}

