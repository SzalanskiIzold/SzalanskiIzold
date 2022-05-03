#include <iostream>

using namespace std;

int main()
{
    int i,j, k, n;
    int v[100][100] ;

    cout <<"n=" ;
    cin>> n ;
    cout<< "k=";
    cin>> k ;
    for(i=0;i<n ; i++){
        for(j=0;j<n ; j++){
            if(j==0){
                v[i][j]=k*(i+1)-i ;
            }else{
              v[i][j]=v[i][j-1] +1 ;
            }
        }
    }
     for(i=0;i<n ; i++){
        for(j=0;j<n ; j++){
                cout<< v[i][j]<< " ";
        }
        cout<<endl;
     }
    return 0;
}
