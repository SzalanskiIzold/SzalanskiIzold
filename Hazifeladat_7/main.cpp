#include <iostream>

using namespace std;
void cuburi(int n)
{

    for(int b=n; b>=1; b--) {
        cout<< b*b*b<<" " ;

    }
}

int main()
{

    cuburi(5);
    return 0;
}
