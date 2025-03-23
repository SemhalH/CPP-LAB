#include <iostream> 
using namespace std;
template <class T>
T evaluate(T x,T z, T y){
    T result;
    result=x*z/y;
    return result;
}
int main(){
    int a=10,b=2,c=4,answer;
   double d=20.5, e=10.2,f=5.3,ans;
   answer=evaluate<int>(a,b,c);
   ans=evaluate<double>(d,e,f);
   cout<<answer<<endl;
    cout<<ans<<endl;
    return 0;
}
