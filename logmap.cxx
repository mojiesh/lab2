/* Author : MOJI
Winter 2015/16
Lab Work 2
Logistic Map
03.11.2015
*/

#include <iostream>
using namespace std;

int main(){
  double x0;
  double dr = 0.01;
  double x1;
  for (double r = 0.0; r <= 4.0; r += dr){
    x0=0.5;
    for (int n = 1; n <= 100; n++){
      x1 = r * x0 * (1-x0);
      x0 = x1;
      if (n >= 20){
	cout << r << "  " << x1 <<endl;
      }
    }
  }
  return 0;
}