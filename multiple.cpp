#include<iostream>
using namespace std;
class Base1
{
	public:
	         int a, b;
			 
	Base1()
	{
      cout<<"Base 1 Constructor"<<endl;
	}
	~Base1()
	{
		cout<<"Base 1 Derstructor"<<endl;
	}
	void fun()
	{
		cout<<"Inside fun"<<endl;
	}
};

class Base2
{
  public:
          int x , y;
		  
		  
  Base2()
  {
	  cout<<"Base 2 Constructor"<<endl;
  }
  ~Base2()
  {
	  cout<<"Base 2 Destructor"<<endl;
  }
  void gun()
  {
	  cout<<"Inside gun"<<endl;
  }
};

class Derrived: public Base1 , Base2
{
   public:
           int z;
		   

   Derrived()
   {
     cout<<"Derrived Constructor"<<endl;
   }
  ~Derrived()
  {
    cout<<"Derrived Destructor"<<endl;
  }
  void sun()
  {
    cout<<"Inside sun"<<endl;
  }
};

int main()
{
  cout<<"inside main"<<endl;
  Derrived dobj;
  return 0;
}  
	  
	
	
	  