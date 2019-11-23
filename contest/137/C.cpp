#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s[100005];
    int N;
    cin >> N;
    
    for(int i =0; i < N; i++)
        cin >> s[i];
    
    char alp[26] = {
        'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
        'o','p','q','r','s','t','u','v','w','x','y','z'
    };

    static int hantei[10000][26] = {0};


    for(int i = 0; i < N; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 26; k++){
                if(alp[k] == s[i][j]){
                    hantei[i][k]++;
                }
            }
        }
    }

    
    int count = 0;
    bool flag;
    
    for(int i = 0; i < N-1; i++){
        for(int k = i+1; k < N; k++){
            flag = true;
            for(int j = 0; j < 26; j++){
                if(hantei[i][j] != hantei[k][j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                count++;
            }    
        }
    }
    cout << count << endl;

}