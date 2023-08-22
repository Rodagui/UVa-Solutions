/*12646 - Zero or One*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int A, B, C;
	bool winner = false;

	while( cin >> A >> B >> C){

		winner = false;

		if(A != B and A != C){
			cout << "A\n";
			winner = true;
		}
		

		if (B != A and B != C){
			cout << "B\n";
			winner = true;
		}

		if(C!= A and C != B){
			cout << "C\n";
			winner = true;
		}

		if(!winner)
			cout << "*\n";


	}

	return 0;
}