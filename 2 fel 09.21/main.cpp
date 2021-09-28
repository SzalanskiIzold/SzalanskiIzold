#include <iostream>

using namespace std;

int main()
{
    int n, v[1000][1000] , S=1, P=1, A=1;
     cin >> n ;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            cin>> v[i][j] ;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                if(i<j && i+j < n-1){
                    S*= v[i][j] ;
                }
                if (i< j && i+j>n-1){
                    P*= v[i][j] ;
                }
                if(i>j && i+j<n-1){
                    A*= v[i][j] ;
                }
        }
    }
      cout<< S << endl ;
     cout<< P << endl ;
     cout<< A << endl ;
    return 0;
}
