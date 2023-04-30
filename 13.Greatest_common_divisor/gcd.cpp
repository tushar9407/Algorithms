//Implement a recursive algorithm for computing the greatest common divisor of two integers using divide-and-conquer.

#include<iostream>
using namespace std;
int gcd(int a, int b) {
   if (a == 0 || b == 0)
   return 0;
   else if (a == b)
   return a;
   else if (a > b)
   return gcd(a-b, b);
   else return gcd(a, b-a);
}
int main() {
   int a = 105, b =30;
   cout<<"Greatest common divisor of "<< a <<" and "<< b <<" is "<< gcd(a, b);
   return 0;
}