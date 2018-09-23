/*414 - Machined Surfaces*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int rows;

	while(cin>>rows){

		if(rows==0)
			break;

		string arr;
		int space[rows];
		int B, tot=0;
		cin.ignore();

		for(int i=0; i<rows; i++){
			B=0;
			getline(cin, arr);

			for(int j=0; j<25; j++){
				if(arr[j]!='X')
					B++;
			}

			space[i]=B;
		}

		sort(space, space+rows);

		for (int i = 1; i < rows; ++i)
		{
			tot+=(space[i]-space[0]);
		}

		cout<<tot<<'\n';


	}

	return 0;
	
}