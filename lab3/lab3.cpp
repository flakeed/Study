//stacks and queue task#12
#include <iostream>
#include <stack>
#include <queue>

int main(){
    std::stack<int> stackk;
    std::queue<int> queuee;
    int x,temp;
    std::cin >> x;
        for (int i=1; i<x;i++){
    if (i % 7 == 0) {stackk.push(i);}//here we are pushing the number to the stack and check that stack %7==0
    else{queuee.push(i);}}//here we are pushing the number to the queue, and if else we a check that queue %7==1
    while(!stackk.empty()){//here we are popping the elements from the stack and check if it not empty
        std::cout <<"Stack:\n"<<stackk.top() << " "<<std::endl;//here we are printing the elements from the stack
        stackk.pop();}//here we are popping the top element of the stack
    while(!queuee.empty()){//if element is not empty then we are popping the elements from the queue
        temp = queuee.front();//here we are taking the front element of the queue
    if(temp>10){std::cout <<"Queue:\n"<<temp << " "<<std::endl;}//here we are printing the elements from the queue
        queuee.pop();}//here we are popping the front element of the queue
    return 0;
}




