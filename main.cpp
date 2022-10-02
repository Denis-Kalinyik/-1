/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    
    int n, i, t, max;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);
    int *a = new int[n];
    printf("Введіть елементи масиву:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Введіть t: ");
    scanf("%d", &t);
    printf("Максимальне негативне до цього числа: ");
    for(i=0; i<t; i++){
        max = 0;
        if(max > a[i]){
            max = a[i];
        }
            printf("%d\n", max);
    }
    return 0;
}