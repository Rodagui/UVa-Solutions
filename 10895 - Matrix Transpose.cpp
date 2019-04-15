/*10895 - Matrix Transpose*/

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int row, col;
	
	while(cin>>row>>col){

		int elem, pos, valor;
		vector <int> indices;

		vector < vector <int> > matriz(row, vector<int> (col, 0)); 

		for (int i = 0; i < row; ++i)
		{
			cin>>elem;

			for (int j = 0; j < elem; ++j){
				cin>>pos;
				indices.push_back(pos - 1);
			}

			for (int j = 0; j < elem; ++j)
			{
				cin>>valor;

				pos = indices[j];
				matriz[i][pos] = valor;
			}

			indices.clear();
		}

		vector < vector <int> > transpuesta(col, vector<int> (row, 0));

		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col ; ++j)
			{
				transpuesta[j][i] = matriz[i][j];
			}	
		}

		cout<<col<<' '<<row<<'\n';
		vector <int> nums;
		indices.clear();

		for (int i = 0; i < col; ++i){

			for (int j = 0; j < row; ++j){

				if(transpuesta[i][j] != 0){
					indices.push_back(j+1);
					nums.push_back( transpuesta[i][j] );
				}
				
			}

			if(indices.size() != 0)
				cout<<indices.size()<<' ';
			else{
				cout<<"0\n\n";
				continue;
			}


			for (int k = 0; k < indices.size(); ++k){
				
				if(k > 0)
						cout<<' ';
				cout<<indices[k];
			}

			cout<<'\n';

			for (int k = 0; k < indices.size(); ++k){
				
				if(k > 0)
					cout<<' ';
				cout<<nums[k];
			}

			

			cout<<'\n';

			indices.clear();
			nums.clear();
		}
	}

	return 0;

}