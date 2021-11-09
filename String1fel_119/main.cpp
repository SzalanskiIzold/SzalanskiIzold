#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str= "Megfaradt ember Nem en kialtok Tiszta szivvel" ;
    cout<< str << endl ;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<< str <<endl ;
    int pos= 'a'- 'A' ;
    for(int i=0; i<str.size(); i++){
        str[i]+=0 ;

    }
    cout<<str<< endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<< str <<endl ;
     pos= 'a' + 'A' ;
    for(int i=0; i<str.size(); i++){
        str[i]+=0 ;

    }
    cout<<str<< endl;


    return 0;
}

