#include <iostream>
using namespace std;

 void towerOfHanoi(int n, char from,char to, char holder)
{
    if (n == 1)
    {
        cout <<  n << "."<< from << "->"<< to << " "  <<endl;
        return ;
    }
    towerOfHanoi(n - 1, from, holder, to);
    cout <<  n << "."<<from << "->"<< to << " " <<endl;

    towerOfHanoi(n - 1, from, holder, to);
}


int main()
{
    int n ;
    cout <<"n=";
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}

