#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    int a,b;
    int count = 0;
    int sum = 0;
    int out = 0;

    cin >> num;
    cin >> a >> b;

    for( int i = 1; i <= num; i++){
        sum = 0;
        int n = i;
        while(1){
            sum += (n % 10);
            if( n / 10 == 0){
                if(a <= sum && sum <=b){
                    out += i;
                }
                break;
            }
            n  = (n / 10);   
        }   
    }
    cout << out << endl;
}