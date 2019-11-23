#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    bool YYMM = true;
    bool MMYY = true;
    string S;
    cin >> S;

    string num_1,num_2;
    int num1, num2;

    num_1 = S.substr(0,2);
    num_2 = S.substr(2,2);

    num1 = stoi(num_1);
    num2 = stoi(num_2);

    if(1 <= num1 && num1 <= 12){
        if(1 <= num2 && num2 <= 12)
            cout << "AMBIGUOUS" << endl;
        else cout << "MMYY" << endl;
    }else{
        if(1 <= num2 && num2 <= 12)
            cout << "YYMM" << endl;
        else cout << "NA"<< endl;
    }
    /*
    if(num1 == 0 || num2 == 0){
        YYMM = false;
        MMYY = false;
    }

    if(num1 > 12 && num2 > 12){
        MMYY = false;
        YYMM = false;
    }else if( num2 > 12 && num1 < 13){
        YYMM = false;
    }else if( num2 < 13 && num1 > 12){
        MMYY = false;
    }
    /* 
    if(YYMM && !MMYY){
        cout << "YYMM" << endl; 
    } else if(!YYMM && MMYY){
        cout << "MMYY" << endl;
    } else if(YYMM && MMYY){
        cout << "AMBIGUOUS" << endl;
    } else{
        cout << "NA" << endl;
    }
    */
    
}