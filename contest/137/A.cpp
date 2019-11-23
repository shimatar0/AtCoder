#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
   int A, B;
   int sum,diff,kake;

   cin >> A >> B;

   sum  = A + B;
   diff = A -B;
   kake = A * B; 

   int max = sum;

   if(sum < diff){
       max = diff;
       if(diff < kake){
           max = kake;
       }
   }else if(sum < kake){
       max = kake;
        if(kake < diff){
            max = diff;
        }
   }

   cout << max << endl;

}