#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string arr[8] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int v[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int curr = 0,mon,day;
    cin>>mon>>day;
    
    for(int i = 0; i<mon-1; i++){
        curr+=v[i];
    }
    cout<<arr[(curr+day)%7];
}