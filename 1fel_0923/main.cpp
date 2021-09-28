#include <iostream>

using namespace std;

int main()
{
    int N, M, SN=0, SM=0, n;
    int v[100][100];
    cout<<"N=" ;
     cin >> N;
     cout<<"M=" ;
     cin >> M;
   for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
             cout << "v["<<i<< "] ["<< j << "]=" ;
            cin >> v[i][j] ;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
                if(i + j == n-1){
                    SN += v[i][j] ;
                }

        }
    SM += v[i][j] ;
    }
      cout<< "SN="<< SN<< endl ;
     cout<< "SM=" << SM << endl ;



    return 0;
}
