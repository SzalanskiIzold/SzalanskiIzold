#include <iostream>

using namespace std;
int joc(int n){
int k=0,oszto;
for(oszto=2;oszto<=n;oszto++)
    if(n%oszto==0)
    k++;
return k ;
}
int main()
{
    int n ;
    cout <<"n=" ;
    cin >> n;
    cout<< joc(n)<< endl;

    return 0;
}
