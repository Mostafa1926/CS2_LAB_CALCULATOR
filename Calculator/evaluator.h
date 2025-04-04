#ifndef EVALUATOR_H
#define EVALUATOR_H

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include "ShuntingYard.h"
using namespace std;

int evaluate(const string& postfix){
    stack<int> nums;
    int i=0;
    while(i<postfix.length()){
        if(isspace(postfix[i])){
            i++;
            continue;
        }
        if(isdigit(postfix[i]) || (postfix[i]=='-' && isdigit(postfix[i+1]))){
            int num=0, sign=1;
            if(postfix[i]=='-'){sign=-1;i++;}
            while(i<postfix.length()&&isdigit(postfix[i])){
                num=num*10+(postfix[i]-'0');
                i++;
            }
            nums.push(num*sign);
        }
        else{
            int b=nums.top();nums.pop();
            int a=nums.top();nums.pop();
            if(postfix[i]=='+')nums.push(a+b);
            else if(postfix[i]=='-')nums.push(a-b);
            else if(postfix[i]=='*')nums.push(a*b);
            else if(postfix[i]=='/')nums.push(a/b);
            i++;
        }
    }
    return nums.top();
}


#endif
