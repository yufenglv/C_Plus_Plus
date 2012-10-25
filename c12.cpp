#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;
class integer{
private:
	static const int len=5;
	int a[len];
public:
	integer(){}
	int operator[](int x) const 
	{
		return a[x];
	}
	friend ostream& operator<<(ostream& os,const integer& ia);	
	friend istream& operator>>(istream& is,integer& ib);
};
ostream& operator<<(ostream& os,const integer& ia)
{
	for(int i=0;i<ia.len;++i)
	{
		//os<<ia.a[i]<<" ";
		os<<ia[i]<<" ";
	}

	os<<endl;
	return os;
}
istream& operator>>(istream& is,integer& ib)
{
	for(int i=0;i<ib.len;++i)
	{
		is>>ib.a[i];
	//	is>>ib[i];
	}
	return is;
}
int main()
{

	stringstream input("1 2 3 4 5");
	integer I;
	input>>I;
//	I[4]=-1;
	cout<<I;
	return 0;
}

