#include <iostream>

using namespace std;

int main()
{
  int n, v[1000][1000] , S=0, P=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            cin>> v[i][j] ;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                if(i==j){
                    S+= v[i][j] ;
                }
                if (i+j==n-1){
                    P+=v[i][j] ;
                }
        }
    }
      cout<< S << endl ;
     cout<< P << endl ;
    return 0;
}
