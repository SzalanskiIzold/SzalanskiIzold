#include <iostream>

using namespace std;
int hatvany(int n)
{
    int d=2 ;
    int p=0 ;
    int dmin=9999,  pmin=99999;
    int min=9999;
    while(n>1)
    {

        while(n%d==0)
        {
            n/= d ;
            p++;

        }
        if(p>0)
        {
            if(p<pmin){
                dmin = d;
                pmin = p;
            }

        }

        d=d+1 ;
        p=0 ;

    }
    d=dmin ;
    p=pmin;
    return d;
}




int main()
{
    int n,d,p;
    cout<<"n=" ;
    cin>> n;


    cout<<hatvany(n)<<endl;

    return 0;
}
