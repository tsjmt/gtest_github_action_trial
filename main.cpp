#include <iostream>
#include "UnionFind.h"

using namespace std;

bool check(int a, int m){
    if(a<0)return false;
    if(a>=m)return false;
    return true;
}
int main(){
    cout<<"input node number"<<endl;
    int N;
    while(!(cin>>N)){
        cin.clear();
        cin.ignore();
    }
    cout<<"tree initialized with N:"<<N<<endl;
    UnionFind tree(N);
    while(1){
        char c;
        cin>>c;
        if(c=='U'){
            int a,b;
            cin>>a>>b;
            a--;b--;
            if(check(a,N)&&check(b,N)){
                tree.unite(a,b);
            }else{
                cout<<"invalid number"<<endl;
            }
        }else if(c=='C'){
            int a,b;
            cin>>a>>b;
            a--;b--;
            if(check(a,N)&&check(b,N)){
                cout<<(tree.root(a)==tree.root(b)?"Connected":"Separated")<<endl;
            }else{
                cout<<"invalid number"<<endl;
            }
        }else if(c=='E'){
            break;
        }else{
            cout<<"invalid command"<<endl;
        }
        cin.clear();
		cin.ignore();
    }
    cout<<"end"<<endl;
    return 0;
}