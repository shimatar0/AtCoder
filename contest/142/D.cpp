#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll prime[100000000];
bool is_prime[100000000];

ll gcd(ll c, ll d){
		return d ? gcd(d, c % d) : c;
	}

int sieve(ll n){
	ll p = 0;
	for(int i = 0; i <= n; i++) is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;
	for(int i = 2; i <= n; i++){
		if(is_prime[i]){
			prime[p++] = i;
			for(int j = 2 * i; j <= n; j += i ) is_prime[j] = false; 
		}
	}
	return p;
}

int main(){
	ll A, B;
	cin >> A >> B;

	ll max_gcd = gcd(A, B);
	ll cnt = 0;
	ll ans = 0;
//	cout << max_gcd << endl;
	
	sieve(max_gcd / 2);

	for(int i = 1; i <= max_gcd; i++){
		if(max_gcd % i == 0){
			if(is_prime[i]) ans++;
		}
	}

	cout << ans + 1 << endl;
}