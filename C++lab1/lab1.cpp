#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
  while(n!=1)
     {
       std::cout<<"n"<<endl;

       if (n%2==0){
          n=n/2;}
       if (n%2==1){
          n=3*n+1;}}
       std::cout<<"n"<<endl;
    return 0;
}




















