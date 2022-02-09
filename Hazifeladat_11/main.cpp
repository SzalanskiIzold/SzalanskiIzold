#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, pos,hossz, x;
    vector<int> tomb ;
    cout<<" n=" ;
    cin>> n;
    for(int i=0; i<n; i++){
        cout<<"tomb["<<i<<"]=" ;
        cout<<"x=" ;
        cin>> x ;

        tomb.push_back(x) ;
    }

    cout<< "pos=";
    cin>>pos;
    cout<<"hossz=" ;
    cin>> hossz ;

    for(int i=0; i<n; i++){
             tomb.erase(tomb.begin()+ pos , tomb.end() - hossz) ;
    }

    for(int i=0; i<tomb.size(); i++){
            cout<< tomb[i]<<" " ;
    }

    return 0;
}
