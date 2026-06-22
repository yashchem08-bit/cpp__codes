#include <bits/stdc++.h>
using namespace std;
class issue_dates{
    private:
    time_t t = time(nullptr);
    tm* now = localtime(&t);
    public:
    vector<int> y = {(now->tm_year + 1900)};
    vector<int> m = {(now->tm_mon + 1)};
    vector<int> d = {now->tm_mday};
    issue_dates(vector<int> y,vector<int> m,vector<int> d){
        this->y = y;
        this->m = m;
        this->d = d;
    }
    void insert(int year , int month , int day){
        y.push_back(year);
        m.push_back(month);
        d.push_back(day);
    }
};
class library 
{
public:
    vector<pair<string,string>> Book_Student;
    vector<int,int> issue_date;
    library(vector<pair<string,string>> Book_Student,vector<int,int> issue_date) {
        this->Book_Student = Book_Student;
        this->issue_date = issue_date;
    }
    library(){

    }
    void issue_book(string name,string Book){
        Book_Student.push_back({name,Book});
        issue_dates day();
        
        //issue_date.push_back(y,m,d);
    }

};
int main()
{
    return 0;
}