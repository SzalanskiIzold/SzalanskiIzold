#include <iostream>
#include<fstream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string szavak[100][100];

    ofstream out ("output.txt") ;
    ifstream in ("input.txt") ;
    int N, i, j;
    in >> N;
    for(int i=0; i<N;i++){
        for (int j=0; j<N; j++)

            in >> szavak[i][j];
    }

        for(int i=0; i<N-1 ; i++) {
            for(j=i+1; j<N; j++){
               transform(szavak[i][j].begin(), szavak[i][j].begin()+2,szavak[i][j].begin(),::toupper)  ;
                transform(szavak[j][i].end()-2, szavak[j][i].end(),szavak[j][i].end()-2 ,::toupper)  ;
            }
    }
             for(int i=0; i<N;i++){
        for (int j=0; j<N; j++){
            out << szavak[i][j]<< " " ;

        }
        out<< endl;
             }


    in.close() ;
    out.close();
    return 0;
}
