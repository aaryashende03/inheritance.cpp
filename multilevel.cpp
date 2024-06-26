//Program: An Multilevel inheritance program in which it is in levelwise manner A->B->C

#include<iostream>
using namespace std;
class Base
{
	public:
	        int a , b;

Base()
{ 
cout<<"Base Constructor"<<endl;
}

~Base()
{
cout<<"Base Destructor"<<endl;
}

void fun()
{
cout<<"Inside fun"<<endl;
}

};

class Derrived: public Base
{
   public:
          int x , y;

Derrived()
{
  cout<<"Derrived Constructor"<<endl;
}

~Derrived()
{
  cout<<"Derrived Destructor"<<endl;
}

void gun()
{
  cout<<"Inside gun"<<endl;
} 

};

class Myderrived: public Derrived
{
   public:
           int u, v;
		   
Myderrived()
{
  cout<<"My Derrived Constructor"<<endl;
}

~Myderrived()
{
  cout<<"My Derrived Destructor"<<endl;
}

void sun()
{
  cout<<"Inside sun"<<endl;
}

};

int main()
{
  //Myderrived obj.fun();
   Myderrived obj;
  
  return 0;
}  