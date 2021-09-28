#include <iostream>

using namespace std;

int main()
{
    int n, v[100][100] , S=1, P=1, A=1;
     cin >> n ;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){

            cin>> v[i][j] ; v[j][i]= v[i][j] ;
        }
    }
    for(int i=0; i<n; i++){
            v[i][i]= 1;
    }
        for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                cout << v[i][j]<< " " ;
                cout<< endl;
        }
    }

    return 0;
}
