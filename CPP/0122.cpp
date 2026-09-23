// #include<iostream>

// using namespace std;

// int main()
// {
//     int a[3][3]={1,2,3,4,5,6,7,8,9};

//     cout << &a ;
//     return   0;
// }

#include<iostream>

using namespace std;

int* add(int x, int y){

    static int z = x + y;
    return &z;
}

int* sub(int x, int y){

    static int z = x - y;
    return &z;
}

int op(int* (*fp)(int (*a)[]), int x){

    int y = 7;
    int* r = fp(x +y);
    return *r;
}
int main(){

    int x;
    x = op(add, 7);
    int y;
    y = op(sub, 7);
    cout << x << " " << y;

    return 0;
}