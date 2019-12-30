# まとめ

### 標準ライブラリ一括インクルード

-   #include <bits/stdc++.h>

---

### ソート
- 昇順
    sort(X, X + M);
- 降順
    3つめの引数にgreater<型>() を追加。

---

### 文字判定

-   #include <cctype>

-   if(isupper(c)) {    // cが大文字のとき
    }

-   if(islower(c)) {    // cが小文字のとき
    }

-   if(isdigit(c)) {    // cの文字が数字の時
    }

-   if(isspace(c)) {    // cが空白文字のとき
    }

### 文字変換
-   toupper(c) //小文字　→　大文字
-   tolower(c) //大文字　→　小文字

---

### 文字列操作系
 ### 参考
    <http://vivi.dyndns.org/tech/cpp/string.html>

- #include <string>

#### サイズ、長さ
-   s.length()
-   s.size()

#### 末尾削除、追加
-   s.pop_back()
-   s += str

#### 先頭追加
-  str = "12" + str;

#### イテレータ

##### 挿入
-    std::string str("1234"); // "1234" という文字列
-    str.insert(str.begin() + 2, '-');       //  [2] の位置に '-' を挿入
-    std::cout << str << "\n";       // 結果は "12-34" となる

##### 削除
-    std::string str("01234");
-    str.erase(str.begin() + 2);       //  3番目の要素（'2'）を削除
-    std::cout << str << "\n";

-    std::string str("01234");
-    str.erase(str.begin() + 2, str.begin() + 4);       //  '2', '3' を削除
-    std::cout << str << "\n";

---
### pair

#### アクセス
-	pair.first , pair.second

#### vector の ペアの宣言
-   二次元配列 vector<vector<int>>
-	vector< pair <long , long> > pair(n);
-	ソート
-	sort(pair.begin(), pair.end());

---     

### map

---
### よく使うアルゴリズム等

#### 切り上げ
-   (a + (b - 1)) / b

#### 最大公約数、最小公倍数
-	// 最大公約数
-	ll gcd(ll c, ll d){
		return d ? gcd(d, c % d) : c;
	}
-	// 最小公倍数
-	ll lcm(ll c, ll d){
		return c / gcd(c, d) * d;
	
	}

#### Bit全探索
-    #include <iostream>
-    #include <vector>

-   int main() {
        int n = 3;

        // {0, 1, ..., n-1} の部分集合の全探索
        for (int bit = 0; bit < (1<<n); ++bit) {
            vector<int> S;
            for (int i = 0; i < n; ++i) {
                if (bit & (1<<i)) { // i が bit に入るかどうか
                    S.push_back(i);
                }
            }
            cout << bit << ": {";
            for (int i = 0; i < (int)S.size(); ++i) {
                cout << S[i] << " ";
            }
            cout << "}" << endl;
        }
    }

- ABC147_C問題
  
### 表示
#### 小数点以下10桁表示する。
-     cout << fixed << setprecision(10) << ans << endl;

#### 座標系  
-   B/75.cpp参照

### 便利な関数  

####  桁数数え上げ

-  ll keta(ll c){
        ll ret = 0;
        while(c){
            c /= 10;
            ret++;
        }
        return ret;
    }

#### 素数判定
- エラトステネスでは求められないなら、愚直で。

##### エラトステネスの篩
- 制約条件 1 <= n <= 10^6
bool primeNumber(ll n){
    if(n < 2) return false;
    else{
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
}

##### 愚直
bool primeNumber(int n){
    if(n < 2) return false;
    else{
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
}