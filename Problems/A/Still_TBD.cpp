#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int year,month,day;
    char c1,c2;
    
    cin >> year >> c1 >> month >> c2 >> day;

    if(month <= 4){
        cout << "Heisei" << endl;
    }else{
        cout << "TBD" << endl;
    }
}