#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
   int n;
   int P[100];
   int count = 0;

    cin >> n;
   for(int i = 0; i < n; i++){
       cin >> P[i];
   } 
   
   int naka;
   int temp[3];

   for (int j = 0; j <= (n - 3); j++){
       for(int k = 0; k < 3; k++){
            temp[k] = P[j+k];
            if(k == 1){
                naka = temp[k];
            }
       }
       sort(temp, temp+3);
       if(temp[1] == naka){
            count++;
       }
   }

   cout << count << endl;

}