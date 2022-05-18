#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[100][100], SNY=0, SK=0, N, a, b;
    ofstream out("lnko.out");
    ifstream in("input.txt");
    in >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            in >> v[i][j];
        }
    }
     for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i+j>N-1 && i<j){
                SK= SK+v[i][j];
            }
            if(i>j && i+j<N-1){
                SNY= SNY + v[i][j] ;

            }
        }
     }
    a=SNY ;
    b=SK ;
    while(a != b){
        if(a>b){
            a=a-b;
        }else{
        b=b-a ;
        }
    }
    out << "lnko="<<a<< endl ;
    cout << SNY<< endl ;
    cout << SK<< endl ;
    in.close();
    out.close();
    return 0;
}
