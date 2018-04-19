#include<iostream>
#include<cstring>
#include "list.cpp"
#include "show.cpp"
#include "add.cpp"
#include "delet.cpp"
#include "file.cpp"
#define P(XX) std::cout<<XX<<"\n";

int main(){
    std::string str;
    int item,i,j,k;
    bool chk;
    item = file();
    while(true){
        getline(std::cin,str);
        if(str=="add"){
            chk = task.add(item);
        }
        else if(str=="delet")
    }
    return 0;
}
