/*12696 - Cabin Baggage*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int cases;
	cin >> cases;

	int tot = 0;
	
	double lengthBag;
	double widthBag;
	double depthBag;
	double weightBag;
	
	bool allow;
	while(cases--){

		allow = false;

		cin >> lengthBag >> widthBag >> depthBag >> weightBag;

		if(lengthBag <= 56.0 and widthBag <= 45.0 and depthBag <= 25.0 and weightBag <= 7.0)
			allow = true;

		if((lengthBag + widthBag + depthBag) <= 125.0 and weightBag <= 7.0 )
			allow = true;

		if (allow){
			cout << "1\n";
			tot++;
		}
		else{
			cout << "0\n";
		}

	}

	cout << tot << '\n';

	return 0;
}