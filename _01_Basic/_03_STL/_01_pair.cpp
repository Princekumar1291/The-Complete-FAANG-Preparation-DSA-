// CPP program to illustrate Pair in STL
#include <iostream>
#include <utility>
using namespace std;

int main(){
	pair<int, char> p;
	p.first = 100;
	p.second = 'G';
	cout << p.first << " ";
	cout << p.second << endl;

	pair<int,int> p2={10,12};
	cout<<p2.first<<" "<<p2.second<<endl;

	pair<int,pair<int,int>> p3={5,{7,3}};
	cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;

	return 0;
}

