#include<bits/stdc++.h>
using namespace std;

class begin{

public:
    int c=1;
    begin(){
        cout<<" C: begin类构造"<<endl;
    }
    ~begin(){
        cout<<" C: begin类析构"<<endl;
    }
    
} begin;

extern "C"{

    void hello(){
        cout<<" C: hello"<<endl;
    }

    int int_add(int a, int b){
        cout<<" C: "<<a<<"+"<<b<<"="<<endl;
        cout.flush();
        return a+b;
    }

    double double_sum(double d[], int n){
        cout<<" C: double数组的和为"<<endl;
        cout.flush();
        double ret=0;
        for(int i=0;i<n;i++) ret+=d[i];
        return ret;
    }

    char* str_ascii(char str[]){
        cout<<" C: 传入的ascii类型的char数组是";
        for(int i=0;i<8;i++)cout<<str[i];
        cout<<endl;
        return str;
    }

    char* str_utf8(char str[]){
        cout<<" C: 传入的utf8类型的char数组是";
        for(int i=0;i<24;i++)cout<<str[i];
        cout<<endl;
        return str;
    }
}