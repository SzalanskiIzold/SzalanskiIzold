#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, x;
    vector<int> tomb ;
    cout<<" n=" ;
    cin>> n;
    for(int i=0; i<n; i++){
        cout<<"tomb["<<i<<"]=" ;
        cout<<"x=" ;
        cin>> x ;

        tomb.push_back(x) ;
    }


    for(int i=0; i<n; i++){
             tomb.pop_back() ;
    }
   n=n-1 ;
    for(int i=0; i<n; i++){
            cout<< tomb[i]<<" " ;
    }

    return 0;
}
