#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x, a, b, utolso=-1 ,elozo=1 ;
    ifstream in("bac.txt") ;
    in>>sufix>> a;
    while(in>>b){
        if(a%1000==sufix &&b%1000==sufix){
            utolso=a ;
            elozo=b ;
        }
        a=b ;
    }
    if(utolso !=-1 && elozo !=1){
        cout<<utolso<< " "<<elozo ;
    }else{
    cout<<" nu exista" ;
    }

    in.close() ;
    return 0;

}
