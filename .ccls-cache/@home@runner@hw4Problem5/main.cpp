#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  double V0, a, h1, h2, x1, r, t, y;
  const double g = 9.81;
  r = acos(-1) /180;
 

  
  for (int i = 0; i < N; i++)
    {
      cin >> V0 >> a >> h1 >> h2;
    double t = x1 / V0/ cos (a*r);
    double y = V0 * t * sin(a * r)- (0.5 *g * (t * t));

      if (( y >= h1+1) && y<= h2-1)
        cout << "Safe" << endl;

      else 
        cout <<"Not safe"<<endl;
      
      
    }
  
}