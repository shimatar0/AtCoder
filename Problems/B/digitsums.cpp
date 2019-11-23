#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main(){
	int N;
	int sum = 0;
 
	scanf("%d", &N);
	int tmp = N;
	while (tmp > 0) {
		sum += tmp % 10;
		tmp /= 10;
	}
	if (N % sum == 0) {
		puts("Yes");
	} else {
		puts("No");
	}
}
