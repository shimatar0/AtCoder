#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int card[100];
    for(int i = 0; i < n; i++){
        cin >> card[i];
    } 
    
    sort(card,card + n, greater<int>());


    int a_sum , b_sum ;
    a_sum = b_sum = 0;

    for(int j = 0; j < n; j++){
        if(j % 2 == 0){
            a_sum += card[j];
        }else
        {
            b_sum += card[j];   
        }
    }

    cout << a_sum - b_sum << endl;
}