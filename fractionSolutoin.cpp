//  #include<bits/stdc++.h>     // operator overloading
// #include<numeric>
// using namespace std;        // fraction class
// class fraction{
// public :
//   int num;
//   int deno;

//   int gcd(int a, int b) {
//     a = std::abs(a);
//     b = std::abs(b);
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

//   fraction(int num , int deno){
//     this->num = num;
//     this->deno = deno;
//   }

//   void display(){
//     cout<<num<<" / "<<deno<<endl;
//   }

//   fraction operator+( fraction f){
//     int newNum = (this->num*f.deno + this->deno *f.num);
//     int newDeno = (this-> deno * f.deno);
//     fraction ans(newNum,newDeno);
//     return ans;
//   }

//   fraction operator-( fraction f){
//     int newNum = (this->num*f.deno - this->deno *f.num);
//     int newDeno = (this-> deno * f.deno);
//     fraction ans(newNum,newDeno);
//     return ans;
//   }
  
//   fraction operator*( fraction f){
//     int newNum = this->num*f.num ;
//     int newDeno = (this-> deno * f.deno);
//     fraction ans(newNum,newDeno);
//     return ans;
//   }
//   fraction operator/( fraction f){
//     int newNum = (this->num*f.deno);
//    int newDeno = (this-> deno * f.num);
//     fraction ans(newNum,newDeno);
//     return ans;
//   }

  
//     void simplify() {
//         int g = gcd(num, deno);
//         num /= g;
//         deno /= g;

//         // Keep denominator positive
//         if (deno < 0) {
//             num = -num;
//             deno = -deno;
//         }
//     }

  
// };
// int main(){
//   fraction f1(1,2);
//   fraction f2(1,4);

//   // f1.display();
//   // f2.display();

//   fraction f3 = f1 - f2;
//   f3.display();
//   f3.simplify();
// }

















#include<iostream>
using namespace std;
class fraction{
    public:

    int num;
    int deno;

    fraction(int num , int deno){
        this->num = num;
        this->deno = deno;
    }

    void display(){
        cout<<num<<"/"<<deno<<endl;
    }

    fraction add(fraction f){
        int newNum = (this->num*f.deno)+(this->deno*f.num);
        int newDeno = (this->deno*f.deno);
        fraction ans(newNum, newDeno);
        return ans;
    }
};
int main(){
fraction f1(1,7);
fraction f2(3,8);
f1.display();
f2.display();
fraction f3 = f1.add(f2);
f3.display();
}