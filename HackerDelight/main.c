//
//  main.c
//  HackerDelight
//
//  Created by 杨思吉 on 2016/10/12.
//  Copyright © 2016年 杨思吉. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned int i = 0;
    do {
        printf("i=%d\n",i);
        i++;
    } while (i <= 0xFFFF);
    
    return 0;
}
