using namespace std;
#include<iostream>
class Parent1{
	public:
		void par1(){
			cout<<"This is parent1";
		}
};

class Parent2{
	public:
		void par2(){
			cout<<"This is parent2";
		}
};

class Child: public Parent1, public Parent2{
	public:
		void show_child(){
			cout<<"I am child";
		}
};

int main(){
	Child obj;
	obj.par1();
	obj.par2();
	obj.show_child();
	
	return 0;
}
