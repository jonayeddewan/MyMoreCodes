#include<bits/stdc++.h>
using namespace std;
class shape{
public:
	virtual void show(){
		cout<<"shape"<<endl;
	}
};
class circle: public shape{
public:
	void show(){
		cout<<"circle"<<endl;
	}
};
class rectangle: public shape{
public:
	void show(){
		cout<<"rectangle"<<endl;
	}
};

int main()
{
	shape *sp;
	circle c;
	rectangle r;

	sp = &c;
	sp->show();
	sp = &r;
	sp->show();
}