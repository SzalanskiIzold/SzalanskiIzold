#include <iostream>
#include <stdlib.h>
using namespace std;
int lenullaz(int a[], int n){

for(int i=0; i<n; i++){
    a[i]=0;
}

}
void feltolt(int a[], int n){
for(int i=0; i<n; i++){
    a[i]=rand() % 100 ;
}
    }
void rendez(int a[], int n){
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(a[i]>a[j]){
            swap(a[i], a[j]) ;
        }
    }
}
}
void kiir(int a[], int n){
for(int i=0; i<n; i++)
    cout<< a[i] << " " ;
}
int main()
{
int a[1000] ;
int n=10;
kiir(a,n) ;
lenullaz(a,n) ;
kiir(a,n);
feltolt(a,n);
kiir(a,n);
rendez(a,n);
kiir(a,n);


    return 0;
}
