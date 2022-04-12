#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in ("input.in");
    ofstream out ("output.out");
    int v[10000]={0}, a, b, x;
    in >> a;
    in >> b;
     for(int i=0; i<a; i++){
        in >> x;
        v[x]=1;

     }
     for(int i=0; i>b; i++){
        in >> x;
       if(v[x]>0){
        v[x]=2;
       }else{
        v[x]=-1;
       }

     }
     for(int i=1; i<10000; i=i+2){
        if(v[i]==1 || v[i]==-1 ) {
            cout << i << " ";
        }
     }
    cout << << endl;
    return 0;
}
