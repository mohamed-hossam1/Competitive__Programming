*----------------------------------------------------------------------*
int factorial(int n) {
   if (n == 0 || n == 1){
       return 1;
   }
   return n * factorial(n - 1);
}
*----------------------------------------------------------------------*
int ncr(int n,int r){
  return factorial(n) / (factorial(r) * factorial(n-r));
}
*----------------------------------------------------------------------*
int npr(int n,int r){
  return factorial(n) / factorial(n-r);
}
*----------------------------------------------------------------------*
