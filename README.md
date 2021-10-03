## UVA10101_Bangla_Numbers_6
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=13&page=show_problem&problem=1042
-----
```c++
if(num>=10000000)
{
  kuti(num/10000000); //Kuti
  ....
}
if(num>=100000)
{
  kuti(num/100000); //lakh
  ....
}
if(num>=1000)
{
  kuti(num/1000); //hajar
  ....
}
if(num>=100)
{
  kuti(num/100); //shata
  ....
}
if(num)
{
  cout<<" "<<num; //constant
}
```
#### Just step by step to print the answer by recursive.
