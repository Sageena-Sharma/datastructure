// wap to find whether the year is leap or not
#include<iostream>
using namespace std;
int main() 
{
  int y;
  cout<<"enter the year in numbers:";
  cin>>y;
  if(y%100==0)
   {
  	 if(y%400==0)
      {
       cout<<"it is a leap year";
	  }
	  else
	    {
	      cout<<"it is not a leap year";
		}
    }
   else
    {
      if(y%4==0)
      {
      	cout<<"it is a leap year";
	  }
	   else
           {
	    	  cout<<"it is not a leap year";
		   }

    }
     
}