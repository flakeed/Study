#include <iostream>
#include <stack>
#include <queue>

int main(){
    std::stack<int> stackk;
    std::queue<int> queuee;
    int x,temp;
    std::cin >> x;
        for (int i=1; i<x;i++){
    if (i % 7 == 0) {stackk.push(i);}
    else{queuee.push(i);}}
    while(!stackk.empty()){
        temp = stackk.top();
        std::cout <<"Stack:\n"<<temp << " "<<std::endl;
        stackk.pop();}
    while(!queuee.empty()){
        temp = queuee.front();
    if(temp>10){std::cout <<"Queue:\n"<<queuee.front() << " "<<std::endl;}
        queuee.pop();}
    return 0;
}
