#include <iostream>

using namespace std;

int main()
{
     int N, v[100][100] , i, j ;
     cout<<"N=" ;
     cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<< "v["<<i<< "] ["<< j << "]=" ;

            cin>> v[i][j] ;
        }
    }
        for(int i=0; i<N; i++){

                v[i][i]=0 ;
               }

             for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
                if(i>j){
                    v[i][j]=-v[i][j] ;
                }

        }
             }

        for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<< v[i][j]<< " ";

        }
           cout<<endl ;
        }

    return 0;
}
