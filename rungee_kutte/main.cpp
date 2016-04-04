#include <iostream>
#include<math.h>

using namespace std;

int main()
{
  double x1=0,y1=1,y2,k,k1,k2,k3,k4,h=0.1;

  for(int i=0;i<2;i++)
  {
     k1=h*(x1+pow(y1,2));
     k2=h*(x1+(h/2) + pow(y1+(k1/2),2));
     k3=h*(x1+(h/2) + pow(y1+(k2/2),2));
     k4=h*(x1+h+pow((y1+k3),2));

     k=(k1 + 2*k2 + 2*k3 + k4)/6;

     y2=y1+k;
     x1=x1+h;
     y1=y2;
  }

  cout<<"y= "<<y2;
}
