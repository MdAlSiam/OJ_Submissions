#include <bits/stdc++.h>
using namespace std;

int main(){
  
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	

	int n, m;
	scanf("%d %d", &n, &m);

	char str[n+5];
	scanf(" %s", &str);

	int state[26];
	for(int i = 0; i < 26; i++)
		state[i] = i;

	while(m--){
		char x, y;
		scanf(" %c %c", &x, &y);
		for(int i = 0; i < 26; i++){
			if(state[i] == x - 'a')
				state[i] = y - 'a';
			else if(state[i] == y - 'a')
				state[i] = x - 'a';
		}
	}

	for(int i = 0; i < n; i++)
		str[i] = state[str[i]-'a'] + 'a';

	printf("%s\n", str);
}
