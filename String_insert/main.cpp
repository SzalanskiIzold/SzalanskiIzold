#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name ;
     name="Kis" ;
     string keresztnev = "Pista Gyozo";
     name.insert(3, " ") ;
     name.insert(4, keresztnev,0, 5);

    cout << name ;
        return 0;
}
