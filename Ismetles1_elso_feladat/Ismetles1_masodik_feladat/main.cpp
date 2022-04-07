#include <iostream>
#include<fstream>

using namespace std;

int main()
{
   ifstream in ("titu.in ");
   ofstream out ("output.txt");

   int a1, a2, v[100], n, min=99, max=0;
   in>>n;
   for (int i=0; i<100; i++){
    v[i]=0;
   }
   for(int i=0; i<n; i++){
    in>>a1;
    in>>a2;


    if(a1<min){
        min=a1;
    }
    if(a2>max){
        max=a2;
    }
    for(int j=a1; j<a2+1; j++){
        v[j]=1;

    }
   }


   int S=1;
   for(int i=min; i<max; i++){
    if(v[i]== 1 && v[i+1]==0){

        S++;



   }}
   out<<S;

   in.close();
    out.close();
    return 0;
}


