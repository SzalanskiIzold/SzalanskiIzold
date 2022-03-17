#include <iostream>
#include <vector>
#include <fstream>
#include<string>
using namespace std;

//szomszedossagi matrix
int m[10][10];
//a csomopontok szama + 1
int n = 8;


bool leall(int m[10][10])
{
    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            if(m[i][j]>0) return false ;
        }
    }
    return true ;

}


bool lehet(int jelenlegi, int kovetkezo, vector<int> v)
{

    if (m[jelenlegi][kovetkezo] == 0)
    {
        return false;
    }
    return true;
}

void kiir(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";

    }
    cout << endl;
}


void backtrack(int jelenlegi, vector<int> v, int m[10][10])
{

    if (leall(m))
    {
        kiir(v);
        return;
    }

    for(int kovetkezo = 1; kovetkezo<n+1; kovetkezo++)
    {

        if (kovetkezo!=jelenlegi)
        {
            if (lehet(jelenlegi, kovetkezo, v))
            {
                string el ;
               if(jelenlegi< kovetkezo){
                el=jelenlegi + "_" +kovetkezo ;

               }else{
               el=kovetkezo + "_" + jelenlegi ;

               }
                vector<int> tempv = v;
                tempv.push_back(kovetkezo);
                int tempm[10][10];
                for(int i=0; i<n+1; i++)
                    for(int j=0; j<n+1; j++)
                        temp[i][j]=m[i][j] ;

        tempm[jelenlegi][kovetkezo]=0;
        tempm[kovetkezo][jelenlegi]=0;
         backtrack(kovetkezo, tempv, tempm)
    }
        }
    }

}


int main()
{
    int m[10][10] ;
    int i, j;
     ifstream in("input.txt") ;
    in>> n ;
    for(i=1; i<n+1; i++)
    {
        for(j=1; j<n+1; j++)
        {
            in>> m[i][j];
        }
    }


    for(i=1; i<n+1; i++)
    {
        for(j=1; j<n+1; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    elekszama/=2 ;
    //probaljuk meg minden elbol bejarni a grafot
    for(i=1; i<n+1; i++)
    {
        vector<int> v;
        v.push_back(i);
        backtrack(i, v,m);
    }
    return 0;
}
