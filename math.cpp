         متتابعه حسابيه
      a1 a1+d a1+2d ------ an   
int sum (int ai,int an,int n) {
  return ((ai + an) * n) / 2;
}
int find_an(int a1,int n,int d){
  return a1 + (n - 1) * d;
}
int find_d(int a1,int a2){
  return a2-a1;
}
         متتابعه هندسيه 
      a1 a1*r a1*r*r ------ an   
int sum (int ai,int n) {
  return a1*(1-pow(r,n))/(1-r);
}
int find_an(int a1,int n,int d){
  return a1 * pow(r,(n-1));
}
int find_r(int a1,int a2){
  return a2/a1;
}
sum all of numbers to n = n*(n+1)/2
sum all of even numders to n = (n/2)*((n/2)+1)/2