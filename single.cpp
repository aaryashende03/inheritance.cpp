#include<iostream>
using namespace std;
class Base //class 1
{
	public:
	        int a , b ; // characteristics
			
	Base()
	{
      cout<<"Base Constructor<<\n";
	}
  
    ~Base()
	{
        cout<<"Base Destructor<<\n";
	}
 
    void fun()
	{
      cout<<"Inside fun<<\n";
	}
};

class Derrived: public Base //Derrived class is inheriting the Base class   //Class 2
{
  public:
          int x , y; 

  Derrived()
  {
    cout<<"Derrived Constructor<<\n";
  }

  ~Derrived()
  {
    cout<<"Derrived Destructor<<\n";
  }
  
  void gun()
  {
    cout<<"Inside gun\n";
  }

};

int main()
{ 
  cout<<"Inside main<<\n";
  Base bobj;
  Derrived dobj;
  
  dobj.fun();
  return 0;
}  
  