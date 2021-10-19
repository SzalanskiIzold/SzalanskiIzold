#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name("Kis Pista") ;
    cout << "What is your name";
    getline(cin, name) ;
    cout <<"Hello,"<< name<< "!";
    cout << name.size() ;
        return 0;
}
