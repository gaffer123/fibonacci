#include <iostream>
using namespace std;

int memo[101] = {0};

unsigned int fib(int x){

  if(x <= 1) return 1;

  if (memo[x] != 0) return memo[x];

  memo[x] = fib(x - 1) + fib(x - 2);
  return memo[x];
}

int main(){

  for(int i = 1; i < 100; i++){

    cout << "fib("<<i<<") = " << fib(i) << endl;
  }
}
