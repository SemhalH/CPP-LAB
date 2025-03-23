#include <iostream>
# include<string>
using namespace std;
int main(){
    int x=6;
    int y=7;{
        int x=2;
        int y=3;
        cout<<"inner block: "<<"x="<< x<<" , " <<"y="<<y<<endl;
    }
    cout<<"outer block: "<<"x="<<x<<" , "<<"y="<<y<<endl;
    return 0;
}