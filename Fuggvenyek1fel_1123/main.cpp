#include <iostream>
using namespace std;
int max(int v[], int n){
  int m=v[0];
for(int i=0; i<n; i++){
    if(m< v[i]){
        m=v[i];
    }
}
 return m ;
}

int main()
{
    int v[10]={1,2,200,3,4,5,6,8,9,0};

     cout<< max(v,10);


}
