#include<iostream>
template <typename T, typename U>
// T max(T x , T y){        for same datatypes....
//     return (x > y) ? x: y;
// }
auto max(T x, U y){         // for differnt datatypes...
    return (x > y) ? x: y;
}
int main(){
    std::cout<<max(3.32,3.3201)<<std::endl;
    std::cout<<max(3.2,3)<<std::endl;
}