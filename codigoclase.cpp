
#include <iostream>
#include <stdlib.h>
using namespace std;
const int n=2;
#include "libreriaxd.cpp"
int main(){
srand((unsigned)time(NULL));
int mat[n][n]={{10,2},{5,6}};
//mat[2][2]={{10,2},[5,6]};
llenar(mat,n);
printx(mat,n);
}