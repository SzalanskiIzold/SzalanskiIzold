#include <iostream>

using namespace std;
int hanoi( int k){
 if(k==0){
    return 0;
}
if(k==1){
    return 1;
}
 return  2* hanoi(k-1) + 1  ;
}
int main()
{
    int  k;
    cout << "k=" ;
    cin>> k;
    cout<< hanoi(k) ;
    return 0;
}
