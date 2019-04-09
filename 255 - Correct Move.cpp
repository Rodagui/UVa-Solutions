/*255 - Correct Move*/

#include <bits/stdc++.h>

using namespace std;

bool moveLegal(int posK, int posQ, int posNva);
bool moveAllowed(int posK, int posQ, int posNva);
bool kingCanMove(int posK, int posQ, int posNva);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int king, queen, nvaPos;
	while(cin>>king>>queen>>nvaPos){

		if(king == queen)
			cout<<"Illegal state\n";
	
		else{
			
			if(moveLegal(king, queen, nvaPos)){
				if(moveAllowed(king, queen, nvaPos)){

					if(kingCanMove(king, queen, nvaPos))
						cout<<"Continue\n";
					else
						cout<<"Stop\n";
				}
				else
					cout<<"Move not allowed\n";
			}

			else
				cout<<"Illegal move\n";
			
		}


	}

	return 0;
}



bool moveLegal(int posK, int posQ, int posNva){
	
	int x, y, i, j, num;
	int found = 0;
	
	i = posQ / 8;
	j = posQ % 8;

	if( posNva == posK)
		return false;

	for (x = i - 1, y = j - 1; x >= 0 and y >= 0; x--, y--)
	{
		num = (8 * x) + y;

		if(num == posNva)
			return false;
	}

	for (x = i - 1, y = j + 1; x >= 0 and y < 8; x--, y++)
	{
		num = (8 * x) + y;

		if(num == posNva)
			return false;
	}

	for (x = i + 1, y = j - 1; x < 8 and y >= 0; x++, y--)
	{
		num = (8 * x) + y;

		if(num == posNva)
			return false;
	}

	for (x = i + 1, y = j + 1; x < 8 and y < 8; x++, y++)
	{
		num = (8 * x) + y;

		if(num == posNva)
			return false;
	}

	y = j;
	for (x = i - 1; x >= 0 ; x--){
		num = (8 * x) + y;
		if(num == posK)
			break;
		if(num == posNva)
			found = 1;
	}

	if(found == 0){
		for (x = i + 1; x < 8 ; x++){
			num = (8 * x) + y;
			if(num == posK)
				break;
			if(num == posNva)
				found = 1;
		}
	}

	x = i;
	if(found == 0){
		for (y = j-1; y >= 0 ; y--)
		{
			num = (8 * x) + y;
			if(num == posK)
				break;
			if(num == posNva)
				found = 1;
		}
	}

	if(found == 0){
		for (y = j+1; y < 8 ; y++)
		{
			num = (8 * x) + y;
			if(num == posK)
				break;
			if(num == posNva)
				found = 1;
		}
	}

	if(found == 1)
		return true;
	else
		return false;

}
bool moveAllowed(int posK, int posQ, int posNva){

	int x, y, i, j, a, b, num;
	set <int> movKing;

	i = posK / 8;
	j = posK % 8;

	x = i-1;
	y = j;
	
	if(x >= 0)
		num = (8 * x) + y;
	movKing.insert(num);

	x = i+1;
	if(x < 8)
		num = (8 * x) + y;
	movKing.insert(num);

	x= i;
	y = j-1;

	if(y >= 0)
		num = (8 * x) + y;
	movKing.insert(num);

	y = j +1;
	if( y < 8)
		num = (8 * x) + y;
	movKing.insert(num);

	if(movKing.count(posNva))
		return false;
	else
		return true;

}
bool kingCanMove(int posK, int posQ, int posNva){
	if(posK == 0 and posNva == 9)
		return false;
	if(posK == 56 and posNva == 49)
		return false;
	if(posK == 7 and posNva == 14)
		return false;
	if(posK == 63 and posNva == 54)
		return false;

	return true;
}