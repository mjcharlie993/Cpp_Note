#include<iostream.h>
#include "TemplateDemo03.h"

void main(){
    CompareDemo<int> cd;
    int a=2,b=3;
    std::cout<<cd.compare(a,b)<<std::endl;
}