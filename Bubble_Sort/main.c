//
//  main.c
//  Bubble_Sort
//
//  Created by 20161104585 on 17/6/16.
//  Copyright © 2017年 20161104585. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j,n;
    int a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<=9;j++)
    {
        for(i=0;i<10-j;i++)
        {
            if(a[i]>a[i+1])
            {
                n=a[i];
                a[i]=a[i+1];
                a[i+1]=n;
            }
        }
    }
    for(i=1;i<11;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
