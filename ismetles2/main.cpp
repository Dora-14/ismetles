#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream titu("titu.txt");
    ofstream out("out.txt");
    int n, v[100000], min=9999999, max=-1, counter=1;
    titu>>n;
    for(int i=0; i<n; i++){
        int a,b;
        titu >> a;
        titu>> b;
        if(a<min){
            min=a;
        }
        if(b>max){
            max=b;
        }
        for(int j=a; j<=b; j++){
            v[j]=1;
        }
    }
    for(int i=min; i<max; i++){
        if(v[i]==1 && v[i+1]==0) counter++;
    }
    cout << counter << endl;
    return 0;
}
