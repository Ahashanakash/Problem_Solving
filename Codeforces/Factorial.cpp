#include <bits/stdc++.h>
using namespace std;
int main() {
	int num,r=1;
	cin >> num;    //Reading input from STDIN
	
	for(int i=num;i>0;i--){
		r=r*i;
	}
	cout<<r<<endl;
	return 0;
}