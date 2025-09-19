#include <iostream>
using namespace std;

void convert_number(int *n){
    *n = (*n%10)*100+(*n/100)+((*n/10)%10)*10;
}

int main()
{
    int a,b;
    cin>>a>>b;
    convert_number(&a);
    convert_number(&b);
    if(a>b){
        cout<<a;
    }else{
        cout<<b;
    }
    
    return 0;
}