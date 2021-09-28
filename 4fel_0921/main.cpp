#include <iostream>

using namespace std;

int main()
{
   int n, v[100][100] , S=0, P=0 ;
     cout<<"n=" ;
     cin >> n;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            cout<< "v["<<i<< "] ["<< j << "]=" ;

            cin>> v[i][j] ; v[j][i]= v[i][j] ;
        }
    }
        for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
               if(i+j <n-1){
                S+= v[i][j] ;
               }
               if(i+j>n-1){
                P+= v[i][j] ;
               }

        }
        }

                cout<<"S="<< S<< endl;
                cout<<"P="<< P<< endl;




    return 0;
}
