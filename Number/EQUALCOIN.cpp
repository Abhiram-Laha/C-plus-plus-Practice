/* Equal Coins  */
#include<iostream>
using namespace std;
 
int main(){
    int test;
    cin>>test;
    while (test--){
 int x, y;

		cin >> x >> y;

		if (x == 0 and y % 2 != 0)

			cout << "NO";

		else if ((x + (y * 2)) % 2 == 0)

			cout << "YES";

		else

			cout << "NO";

		cout << endl;
		
	}

return 0;
}