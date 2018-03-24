#include <iostream> 
  
using namespace std; 
  
int a = 66; 
string str; 
str.at(0); 
str.length(); 
str.substr(a,b); 
 
p.swap(str) // change 2 strings == p, str = str, p 
p.find("ab");  //find from left 
p.rfind("ab");  //find from right 
p.replace(); 
p.insert(); 
 
int main() { 
    int a = 2; 
    cout << a <<endl;         //66 
    cout << ::a <<endl;      //2 
    return 0; 
} 
 
 
 
 
#include <cmath> 
pow(x, y); 
 
 
#include <cstdlib> 
#include <ctime> 
Srand(time(0)); 
(rand()%6)+1 
