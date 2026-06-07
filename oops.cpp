// #include<bits/stdc++.h>
// using namespace std;
// class student {
//     public :
//     string name ;
//     int rno;
//     float gpa;
// };
// void print (student s){
//   cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
// }
// int main(){
//   student s1;
//     s1.gpa = 9.9;
//     s1.name = "yash mishra";
//     s1.rno = 10;

//     student s2;
//     s2.gpa = 9;
//     s2.name = " RJ ";
//     s2.rno = 14;

//     student s3;
//     s3.gpa = 8.5;
//     s3.name = "Adarsh";
//     s3.rno = 17;

//     print(s1);
//     print(s2);
//     print(s3);
    
// }








#include<bits/stdc++.h>   //constructor
using namespace std;
class student {
    public :
    string name ;
    int rno;
    float gpa;

    student (string s , int r , float g){
         name = s;
         rno = r;
         gpa = g;
    }

};
void print (student s){
  cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}
int main(){
  student s1("yash mishra",10,9.9);
  print(s1); 
  student s2("himanshu",11,9.8);
  print(s2);
}













// #include<bits/stdc++.h>   // multiple constructor
// using namespace std;
// class car {
// public:

//   string name;
//   int price;
//   int power;
//   float rating;
//   car(){  //default constructor......

//   }
//   car(string n , int p , int pow , float r){    // constructor1.....
//     name = n;
//     price = p;
//     power = pow;
//     rating = r ;
//   }

//   car(string n,int p,int pow){    //constructor2.....
//     name = n;
//     price = p;
//     power = pow;
//   }
// };

// void print(car c){
//   cout<<c.name<<" "<<c.price<<" "<<c.power<<" "<<c.rating<<endl;
// }
// int main(){
//  car c1("honda city", 150000,1000,10);
//  print(c1);

//  car c2("fortuneer",3200000,2000,9.9);
//  print(c2);

//  car c3("i10",800000,1200,10);
//  print(c3);

//  car c4 = c1;
//  print (c4);

//  car c5(c3);
//  print(c5);
// }






// #include<bits/stdc++.h>   // "this " keyword .........imp....
// using namespace std;
// class cricketer{
//   public:
//   string name ;
//   int runs;

//   cricketer(string name , int runs){
//     this->name = name;
//     this->runs = runs;
//   }
//   void print(){
//     cout<<name<<" "<<runs<<endl;
//   }

// };


// int main(){
//   cricketer c1("rohit sharma",20000);
//   cricketer c2("virat kholi",250000);
//   cricketer c3("sachin tendulkar",300000);
//   // c1.print();
//   // c2.print(); 
//   // c3.print();

//   cricketer* p1 = &c1;
//   cout<<p1->runs<<(*p1).name<<endl;  //(*p1).name = p1->name........

// }










// #include<bits/stdc++.h>   // dynamic allocation
// using namespace std;
// class cricketer{
//   public:
//   string name ;
//   int runs;

//   cricketer(string name , int runs){
//     this->name = name;
//     this->runs = runs;
//   }
//   void print(){
//     cout<<name<<" "<<runs<<endl;
//   }

// };


// int main(){
//   cricketer c1("rohit sharma",20000);
//   cricketer c2("virat kholi",250000);
//   cricketer c3("sachin tendulkar",300000);

//   int *ptr = new int(8975);
//     cout<<*ptr<<endl;

//   cricketer* c4 = new cricketer("MS Dhoni",50000);
//   c4->print();
// }



















// #include<bits/stdc++.h>
// using namespace std;
// class student {
//   public:
//   string name;
//   int rno;
//   float gpa;

//   student(string name , int rno , float gpa){
//     this->name = name;
//     this->rno = rno;
//     this->gpa = gpa;
//   }

//   void print(){
//     cout<<name<<" "<<rno<<" "<<gpa<<endl;
//   }
// };
// int main(){
//   student s1("yash mishra",56,9.9);
//   s1.print();
// }

























// #include<bits/stdc++.h>
// using namespace std;
// class Vector{
//   public :
//   int size;
//   int capacity;
//   int* arr;

//   Vector(){
//     size = 0;
//     capacity = 1;
//     arr = new int[1];
//   }

//   void add(int ele){
//     if(size == capacity){
//     capacity *= 2;
//     int* arr2 = new int[capacity];
//     for(int i=0;i<size;i++){
//       arr2[i] = arr[i];
//     }
//     arr2 = arr;
//     }
//     arr[size++]  = ele;
//   }

//   void remove(){
//     if(size == 0){
//       cout<<"ARRAY IS EMPTY";
//     }
//     size--;
//   }

//   void print(){
//     for(int i=0;i<size;i++){
//       cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//   }

//   int get(int idx){
//     if(idx<0 || idx > size){
//       cout<<"INVALID INDEX ";
//     }

//     if(size == 0){
//       cout<<"ARRAY IS EMPTY";
//     }

//     return arr[idx];
//   }

// };
// int main(){
  
// }




























// #include<bits/stdc++.h>     // using access modifiers........
// using namespace std;
// class student{
// public :
// string name ;
// int rno;
//   student(string name , int rno , float marks){
//     this->marks = marks;
//     this->name = name ;
//     this->rno = rno;
//   }

//   void display(){
//     cout<<name<<" "<<rno<<" "<<marks<<endl;
//   }

//   int getMarks(){   // getter
//     return marks;
//   }
//   int setMarks(float m ){ // setter
//     marks = m;
//   }


// private:
// float marks;
// };
// int main(){
//   student s1("yash mishra ",10,99);
//   s1.display();
//   cout<<s1.getMarks()<<endl;
//   s1.setMarks(100);
//   cout<<s1.getMarks();

// }





















// #include<bits/stdc++.h>     // single inheritance....... // parent and child class
// using namespace std;
// class scooty{   // parent class
// public:
//   int topSpeed;
//   float milege;

// private:
//   int bootspace; 
// };

// class Bike : public scooty{    // child class
// public:
//   int gears;
// };
// int main(){
//   Bike b1;
//   b1.topSpeed = 120;
//   b1.milege =  55.6;
//   b1.gears = 6;

// }













// #include<bits/stdc++.h>     // multiple inheritance....... 
// using namespace std;
// class cricketer{
//   public :
//   int wickets;
//   int runs ;
//   int average;
// };
// class Engineer{
//   public :
//   int experince ;
//   string domain;
//   bool DSA;
// };
// class AllRounder : public Engineer , cricketer{
//   public :
//   string name;
// };
// int main(){
//   AllRounder a1;
//   a1.DSA = true;
// }































// #include<bits/stdc++.h>     // operator overloading
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
//     int newDeno = (this-> deno * f.num);
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

















#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Square();

    s1->draw(); // Circle
    s2->draw(); // Square

    delete s1;
    delete s2;
    return 0;
}