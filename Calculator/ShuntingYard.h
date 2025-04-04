#ifndef SHUNTING_YARD_H
#define SHUNTING_YARD_H

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int getPriority(char op){
    if(op=='+'||op=='-')return 1;
    if(op=='*'||op=='/')return 2;
    return 0;
}

string convert(const string& infix){
    stack<char> value;
    string result;
    for(int i=0;i<infix.length();i++){
        char ch=infix[i];
        if(isspace(ch))continue;
        if(isdigit(ch)){
            while(i<infix.length()&&isdigit(infix[i])){
                result+=infix[i];
                i++;
            }
            result+=' ';
            i--;
        }
        else if(ch=='(')value.push(ch);
        else if(ch==')'){
            while(!value.empty()&&value.top()!='('){
                result+=value.top();
                result+=' ';
                value.pop();
            }
            value.pop();
        }
        else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            while(!value.empty()&&getPriority(value.top())>=getPriority(ch)){
                result+=value.top();
                result+=' ';
                value.pop();
            }
            value.push(ch);
        }
    }
    while(!value.empty()){
        result+=value.top();
        result+=' ';
        value.pop();
    }
    return result;
}


#endif
