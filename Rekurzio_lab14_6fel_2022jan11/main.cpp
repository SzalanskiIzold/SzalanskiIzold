#include<iostream>
using namespace std ;
int mandelbrot(int c, int k)
{
    if(c == 0){
        return 0;
    }
   if(k==0){

        return c;
    }

return mandelbrot(c, k-1)*mandelbrot(c,k-1)+c;
}
int main() {

int c,k;
cout<<"c=" ;
cin>>c ;
cout<< "k=" ;
cin>> k;
cout<< mandelbrot(c,k)<< endl;

}
