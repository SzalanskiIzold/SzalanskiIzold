#include<iostream>
#include <climits>
using namespace std;

struct lista {
   int szamertek;
   string gyumolcs;
   lista * kov;
};
int main() {
   lista * mutato = NULL;
   int max=-INT_MAX;
   int N;
   cout << "N = " ;
   cin >> N ;
   int i;

   for(i=0;i<N;i++) {
      lista * ujelem = new lista;
      cout<<"Kerem a szamerteket " << " ";
      cin >>ujelem->szamertek ;
      cout<<"Kerem a gyumolcsot"<< " " ;
      cin >> ujelem->gyumolcs;
       if(ujelem->szamertek > max)
        {
            max = ujelem->szamertek;
            }
     ujelem->kov  = mutato;
     mutato = ujelem;
   }
   cout << endl;
   while(mutato) {

      if (mutato->szamertek == max)
      {
      cout << mutato->gyumolcs << " " << endl ;
      }
      mutato = mutato->kov ;

   }
   cout << endl;

    return 0;
}
