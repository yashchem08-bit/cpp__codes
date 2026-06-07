#include<bits/stdc++.h>
using namespace std;
class student {
    public:
    string name;
    int rno;
    float gpa;
    student(){  // default constructor

    }
    student(string n , int r, float g) {    //user defined constructor//parametrized costructor
        name = n;
        rno = r;
        gpa = g;
    }
    student(int r , string n , float g){
        rno = r;
        name = n;
        gpa = g;
    }
};
void print(student s){
    cout<<s.name <<" "<<s.rno<<" "<<s.gpa<<endl;
}
int main(){
    student s1("yash mishra",686,9.05);
    print(s1);

    student s2;
    s2.name = "adarsh tripathy";
    s2.rno = 34;
    s2.gpa = 9.15;
    print(s2);

    student s3(21,"yash",9.5);
    print(s3);

    student s4 = s2;    // deep copy
    print(s4);

    student s5(s4); // deep copy
    print(s5);
}