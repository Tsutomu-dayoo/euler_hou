//
//  main.cpp
//  euler_hou
//
//  Created by 山口勉 on 2018/09/01.
//  Copyright © 2018年 山口勉. All rights reserved.
//

#include <iostream>
#include <math.h>

int main(){
    double f1,f2,f,x;
    double dx = 0.001;
    int i;
    
    f1 = 1.0;
    x = 0;
    
    for(i = 0;i<100;i++){
        x = i * dx;
        f2 = f1 * (1 + dx * x);
        
        f = exp(0.5 * x * x);
        
        printf("数値計算→ %lf, 数値解析→%lf \n\r",f,f2);
        
        f1 = f2;
    }
}
