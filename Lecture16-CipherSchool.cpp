#include<iostream>
using namespace std;

int sum(int a, int b)
{
	int c;
	a = 10;
	b = 11;
	
	c = a+b;
	return c;
}

int main()
{
	int a, b ;
	a = 5;
	b = 3;
	cout<<a<<" "<<b<<endl; // these values are before i call the function
	int c = 0;
	
	c = sum(a,b);
	
	cout<<c<<endl;
	cout<<a<<" "<<b<<endl;
	return 0;
}
