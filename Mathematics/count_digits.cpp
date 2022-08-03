#include<iostream>
using namespace std;
int countdig(int num){
    int i=0;
    while(num>0){
      i++;
      num = num/10;
    }
    return i;
}
int main(){
    cout<<countdig(458938);
    return 0;
}