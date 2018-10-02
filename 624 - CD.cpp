/*624 - CD*/
#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, vector<int> > Par;
Par busca (vector<int> indices, int pos, int suma);

int N, T, suma, pos; 

int arr[30];

int main(){

	while(cin>>N){
		
		cin>>T;

	
		for (int i = 0; i < T; ++i)
		{
			cin>>arr[i];
		}

		Par res = busca(vector<int> (), 0, 0);

		for (int i = 0; i < res.second.size(); ++i)
		{
			cout<<res.second[i]<<" ";
			
		}

		cout<<"sum:"<<res.first;
		cout<<"\n";

	}



	return 0;
}

Par busca (vector<int> indices, int pos, int suma){
	if(suma>N)
		return Par(0, vector<int>());
	if(pos==T)
		return Par(suma, indices);

	Par uno=busca(indices, pos+1, suma);
	indices.push_back(arr[pos]);
	Par dos= busca(indices, pos+1, suma+arr[pos]);
	if(uno.first<dos.first)
		return dos;
	return uno;
}