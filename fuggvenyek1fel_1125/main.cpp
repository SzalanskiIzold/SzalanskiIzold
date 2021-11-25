#include <iostream>
#include <string>
using namespace std;
bool prim(int a){
for(int oszto=2; oszto<a/2+1; oszto++){
    if(a%oszto==0){
        return false ;
    }
}
    return true;
    }
    bool palindrome(string str){

      int ideiglenes,szamjegy, ujszam;
       ujszam=0;
       ideiglenes=a
       while(ideiglenes>0){
            szamjegy=ideiglenes%10 ;
       ideiglenes=ideiglenes/10;
        ujszam=ujszam*10+szamjegy ;

       }
     if(ujszam==a){
        return true ;
     }else{
     return false ;

     }
    }

    int lnko(int a, int b ){
        while(a!=b){
            if(a>b){
                a=a-b;
            }else{
            b=b-a;
            }
        }
        return a ;
    }
int main()
{

int n,a,b;





cout <<"Mit szeretnél csinálni? "<< endl <<  " 1.Megvizsgálni, hogy egy szám prím-e"<< endl;
cout<< " 2. Megvizsgálni, hogy egy szám pallindróm-e."<<endl;
cout<< " 3.Megkeresni két szám legnagyobb közös osztóját."<<endl;
cout<< " 0, kilepni "<< endl<< ;


}

cout<< "a=";
cin >> a;
cout<< "b=";
cin >> b;
string str;
getline(cin, str) ;
return 0;
}
