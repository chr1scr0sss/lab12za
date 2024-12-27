#include<iostream>

using namespace std;

void mySwap(int &,int &); 
void mySwap(string &,string &); 
void mySwap(char &,char &); 

int main(){
	int x, y;
	string a, b;
	char p, q;
	
	cin >> x >> y >> a >> b >> p >> q;
	
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap(x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	cout << "Before swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	mySwap(a,b);
	cout << "After swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	
	cout << "Before swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";
	mySwap(p,q);
	cout << "After swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";

	return 0;
}

void mySwap(int &x, int &y){
    int tempnum = x;
    x = y;
    y = tempnum;
}
void mySwap(string &a, string &b){
    string tempquotes = a;
    a = b;
    b = tempquotes;
}
void mySwap(char &p, char &q){
    char tempchar = p;
    p = q;
    q = tempchar;
}
