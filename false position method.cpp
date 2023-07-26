#include <iostream>
using namespace std;

double c;
int iteration = 0;
double f(double x) {
  return x * x * x - x - 1;
}
double false_position(double a, double b, double tolerance){
  while (abs(b - a) > tolerance) {
     c = a + (b - a) * f(b) / (f(b) - f(a));
    if (f(a) * f(c) < 0) {
      b = c;
    } else {
      a = c;
    }
    iteration ++;
  }
  return c;
}

int main() {
  double a = 1.0;
  double b = 2.0;
  double tolerance = 0.0001;
  double root = false_position(a, b, tolerance);
  cout<<"The root is: "<<root<<endl;
  cout<<"The iteration are: "<<iteration<<endl;
  return 0;
}

