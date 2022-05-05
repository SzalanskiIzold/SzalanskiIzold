#include <iostream>

using namespace std;
bool a_szam_prim(int n) {
    int i;
    for (int i = 2; i <= n / 2+1; ++i) {
            if (n % i == 0) {
                return false;

            }
        }
        return true;
    }


void primek(int n, int& x, int& y){
int eddig_kapott_primek_szama = 0;

    for(int i = n-1; i >= 1; i--)
    {
        if(a_szam_prim(i))
        {
            if(eddig_kapott_primek_szama == 0)
            {
                y = i;
            }else if(eddig_kapott_primek_szama == 1)
            {
                x = i;

            }else
            {
                break;
            }


            eddig_kapott_primek_szama ++;
        }
    }

}
int main()
{
    int n,x,y;
    cout<< "n=" ;
    cin>> n;
    primek(n,x,y);
    cout<<x<< endl;
    cout<< y<< endl;
    return 0;
}
