/*army buddies*/
#include <iostream>
#include <vector>

using namespace std;

int main(){

	int sold, con;

	while(cin>>sold>>con and sold and con){
		int i, L, R, izq, der;
		vector <int> Right(sold+2);
		vector <int> Left(sold+2);

		for (i = 1; i < sold; ++i)
		{
			Right[i]= i+1;
		}

		for (i = 1; i <= sold; ++i)
		{
			Left[i]= i-1;
		}

		for (i = 0; i < con ; ++i)
		{
			cin>>L>>R;

			izq= Left[L];
			Right[izq]=Right[R];

			der = Right[R];
			Left[der] = Left[L];

			if(Left[L])
				cout<<Left[L]<<' ';
			else
				cout<<"* ";

			if(Right[R])
				cout<<Right[R]<<'\n';
			else
				cout<<"*\n";

		}

	cout<<"-\n";

	}

	return 0;
}

