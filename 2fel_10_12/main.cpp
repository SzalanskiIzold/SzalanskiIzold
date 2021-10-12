#include <fstream>
#include <iostream>


using namespace std;

int main()
{
    int v[100][100], N, S=0, oszto;
    ifstream in ("input.txt") ;
    in >> N;
    for(int i=0; i<N;i++){
        for(int j=0; j<N; j++){

            in >> v[i][j];
            bool prim =true ;
        for(oszto=2; oszto<v[i][j]/2+1 ; oszto++) {
            if(v[i][j] % oszto== 0){
                prim = false ;
            }
        }
            if(prim){
                S+= v[i][j];
            }
           }
        }
    cout<< S<< endl;
    in.close() ;
    return 0;
}
