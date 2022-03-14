#include <iostream>
#include<fstream>
using namespace std;

int v[100][100] ;
bool van (int i, int j){
if(v[i][j]> 0){
    return true;
}
return false ;
}
int hanydb (int v[][100], int i, int N){
   int db=0;
   for(int x=0; x<N; x++){
    db+=v[i][x];
   }
return db ;
}


int main()
{
    int a, b, c ;
    int n;
    int k=1 ;
    ifstream in("input.txt") ;
    in>> n ;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            in>>v[i][j];
        }
    }

    cout << "  ";
     for(int i=1; i<n+1; i++){
        cout<< i<< " " ;
     }
     cout<< endl ;
      for(int i=0; i<n; i++){
        cout<< k<< " " ;
      for(int j=0;j<n; j++){
        cout<<v[i][j]<< "  " ;
      }
      cout<<endl;
      k++ ;
      }
     cout<< "elso pont" ;
     cin >> a;
     cout<< "masodik pont" ;
     cin>> b;
     if (van(a-1, b-1)){
        cout<< "van osszekotettes" ;

     }else{
         cout<< "nincs osszekotettes" ;
     }
     cout<< endl ;
     cout<< "csomopont" ;
     cin>> c;
     cout<< hanydb(v, c-1,n) ;
     cout<< endl ;
     int tomb[100], tomb2[100] ;
    for(int i=0;i<n; i++){
        tomb[i]=hanydb(v,i,n) ;
        tomb2[i]=i;
    }
    for(int i=0;i<n; i++){
        cout<<tomb2[i]<< "  " ;

    }
    cout<<endl ;
    for(int i=0;i<n; i++){
        cout<< tomb[i]<< " " ;

    }
    cout<< endl ;
    int p=0, aux;
    bool csere=true ;
    while(csere==true){
        csere=false ;
        for(int i=0;i<n-p-1; i++){
            if(tomb[i+1]<tomb[i]){
                aux=tomb[i+1] ;
                tomb[i+1]=tomb[i] ;
                tomb[i]=aux ;
                aux=tomb2[i+1] ;
                tomb2[i+1]=tomb2[i];
                tomb2[i]=aux ;
                csere=true ;
            }
        }
        p++ ;
    }
    for(int i=0;i<n; i++){
        cout<< tomb2[i] << "  " ;

    }

    cout<< endl ;

    for(int i=0;i<n; i++){
        cout<< tomb[i] << "  " ;

    }
    return 0;
}
