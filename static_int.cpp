#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    // Test case 1
    double a1 = 5.4;
    double b1 = 5.6;
    double sum=a1+b1;
    // Test case 2
    double a2 = 5.675;
    double b2 = 5.3;
    sum=a2+b2;
  
  cout<<fixed<<setprecision(2)<<sum;

    return 0;
}
