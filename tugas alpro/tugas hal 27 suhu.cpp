#include <iostream>
using namespace std;

int main ()
	{
		int d ;
	cout<<"Masukan Suhu:";
	cin>>d;
	
	string suhu= d > 30  ?  "panas" : "dingin";
	cout<<suhu;
	}
