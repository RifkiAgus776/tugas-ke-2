#include <iostream>
using namespace std;

int main ()
	{
		int nilai ;
	cout<<"masukan angka:";
	cin>>nilai;
	
	string oe= nilai % 2 == 0? "genap" : "ganjil";
	cout<<oe;
}
