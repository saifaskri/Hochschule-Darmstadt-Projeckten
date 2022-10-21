#include <iostream>
using namespace std;
int main(void)
{
     cout << "los" " geht's!" <<endl ;

     auto i=16;

     while (i<=63) {
         int r = i%4;
         if (r == 0){
             cout << endl;
             cout << hex << i << " " << dec << i << " " << oct << i<< " ";
         }
        i = i + 1;
     }

     return 0;
}
