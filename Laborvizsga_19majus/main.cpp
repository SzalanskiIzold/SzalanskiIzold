#include <iostream>

using namespace std;
int factori(int n, int m){
int p1, p2, k=0 ;
int d=2 ;
while(n>1 && m>1){
    int p1=0 , p2=0;

while(n%d==0){
    p1++ ;
    n=n/d ;
}
while(m % d == 0){
    p2++ ;
    m=m/d ;
}
if (p1==p2 && p1>0)
        k++ ;
    d++ ;

}

return k ;
}
int main(){
int n, m;

    cout<< factori(16500, 10780) ;
    return 0;
}
