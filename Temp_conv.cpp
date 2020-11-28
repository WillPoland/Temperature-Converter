#include <iostream>

using namespace std;

const int lower = 0;
const int step = 20;
const int upper = 300;

int main()
{
  int farh = lower;
  double celcius = 0;

  cout.width(15);
  cout<<"Fahrenheit:";
  cout.width(17);
  cout<<"Celcius:";
  cout.width(20);
  cout<<"Absolute Value:\n";

  cout.precision(2);
  cout.setf(ios::fixed);

  for(farh = lower; farh <= upper; farh += step)
  {
    cout<<" ";
    cout.width(15);
    cout<<farh;
    celcius = (static_cast<double>(5)/9)*(farh - 32);
    cout.width(15);
    cout<<celcius;
    cout.width(15);
    cout << celcius+273.15<<endl;
  }
  return 0;
}
