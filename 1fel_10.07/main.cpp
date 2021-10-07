#include <iostream>

using namespace std;

int main()
{
 int N, M, SF=0, SM=0, n;
    int v[100][100];
    cout<<"N=" ;
     cin >> N;

   for(int i=0; i<N; i++){
        for(int j=0; j<N ; j++){
             cout << "v["<<i<< "] ["<< j << "]=" ;
            cin >> v[i][j] ;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N;j++){
                if(i + j == n-1){
                  SM+= v[i][j] ;
                }
                if (i==j){
                    SF+=v[i][j];
                }
        }

    }
      cout<< "SN="<< SN<< endl ;
     cout<< "SM=" << SM << endl ;


    return 0;
}
