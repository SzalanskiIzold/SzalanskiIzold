#include <iostream>
#include<stdlib.h>
#include <stdio.h>
using namespace std;
int minimum(int balindex, int jobbindex, int tomb[]){
if(balindex==jobbindex){
    return tomb[jobbindex] ;
}
int kozep=(balindex+jobbindex)/2 ;
int min1=minimum(balindex,kozep,tomb) ;
int min2=minimum(kozep+1,jobbindex,tomb) ;
if (min1<min2){
    return min1 ;
}else{
  return min2 ;
}
}
int main()
{
    srand(0);
    int tomb[100000] ;
    int N ;
    cout<< "N=" ;
    cin>> N ;
    for(int i = 0; i<N; i++){

tomb[i]=rand()%10000;

}
 cout<< minimum(0,9,tomb) ;

    return 0;
}
