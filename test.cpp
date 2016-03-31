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
    // insert code here...
    //freopen("/Users/tenghaibin/CodeData/input.txt","r",stdin);
    //freopen("/Users/tenghaibin/CodeData/output.txt","w",stdout);
    const char in_path[50] = "/Users/tenghaibin/CodeData/input.txt";
    FILE *fp ;
    fp = fopen(in_path, "r");
    int n;
    int num[top];
    char c;
    while(fscanf(fp,"%d",&n)!=EOF){
        for (int i=0; i<n; i++) {
            fscanf(fp,"%d%c",num + i,&c);
        }
        if (n<1000) {
            show_num(num, n);
        }

    }
    return 0;
}
