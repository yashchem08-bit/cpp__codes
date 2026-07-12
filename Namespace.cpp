#include<bits/stdc++.h>
namespace first{
    int x = 100;
    std ::string y = "yash";
}
namespace second{
    float x = 9.10;
    std::string y = "YASH";
}
int main(){
   std::cout<<first::x<<std::endl<<first::y<<std::endl;
   
   using namespace first;
   std::cout<<x<<std::endl<<y<<std::endl;

   std::cout<<second:: x<<std::endl<<second:: y;
}