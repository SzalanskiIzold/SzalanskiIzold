#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int a;
    a=rand() % 11;
    cout<< a<< endl ;
    return 0;
}
