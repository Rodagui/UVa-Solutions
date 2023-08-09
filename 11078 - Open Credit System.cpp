/*11078 - Open Credit System*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int cases;

	cin >> cases;

	int students;

	while(cases--){

		cin >> students;

		vector <int> values(students);

		int maxi;
		int mini;
		int ans;

		/*guardamos todos los valores en un arreglo*/
		for (int i = 0; i < students; ++i)
		{
			cin >> values[i];
		}

		/*separamos cual es el numero mayor y cual el menor*/
		maxi = max(values[0], values[1]);
		mini = min(values[0], values[1]);

		/*guardamos los primeros dos valores y sacamos su diferencia y la ponemos como respuesta temporal*/
		ans = values[0] - values[1];


		for (int i = 2; i < students; ++i)
		{
			
			
			/*la respuesta se actualiza con el maximo entre: (la diferencia del mini y el valor actual) y (la respuesta actual)*/
			ans = max(mini - values[i], ans);
			/*la respuesta se actualiza con el maximo entre: (la diferencia del maxi y el valor actual) y (la respuesta actual)*/
			ans = max(maxi - values[i], ans);

			/*despues actualizamos si hay un num mayor o menor que los que ya tenía*/
			if(values[i] > maxi)
				maxi = values[i];
			if(values[i] < mini)
				mini = values[i];

		}

		cout << ans << '\n';
	}
	return 0;
	
}