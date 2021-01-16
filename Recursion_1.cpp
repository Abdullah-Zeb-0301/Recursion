#include<iostream>
using namespace std;
int y,limit=0;
void recurse(int x)
{
	if (x <= y) {
		for (int i = 0; i < x; i++) {
			cout << "*";
		}
		cout << endl;
		limit++;
		recurse(x + 1);
	}
	else 
		system("pause");
}

int main()
{
	int a = 1;
	cout << "Please enter a number"<<endl;
	cin >> y;
	recurse(a);
}