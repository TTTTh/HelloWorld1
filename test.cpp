//
//  main.cpp
//  Qsort
//
//  Created by 滕海滨 on 15/11/16.
//  Copyright © 2015年 滕海滨. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <fstream>

using namespace std;

const int top = 1024*1024;

void show_num(int *p, int n){
    int i = 0,j = 0;
    while (i*10+j<n){
        j=1;
        printf("%d",p[i*10+j]);
        while(j<10){
            printf(",%d",p[i*10+j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

void Qsort(int * p, int left, int right){
    if (l>=r) {//如果l大于r说明已经结束
        return ;
    }
    int l = left;
    int r = right;
    int value =
    while (l<r){

    }

}
int main(int argc, const char * argv[]) {
    printf("Hello World!\n");
    return 0;
}
