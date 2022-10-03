//https://youtu.be/I475waWiTK4  yt link
//IN TTHIS RIGHTMOST SET BIT MANIPULATION IS USED
//THIS ALGO IS TO FIND NUMBER OF 1 PRESENT IN BIT
//RSMB OF NUMBER  EQUALS (N & -N) OR N & N" (TWOES COMPLEMENT)
//RIGHTMOST SET BIT :
//-------------------
/*EG:
N=6 
0110
~x=1001
x"= ~x +  1
  = 1001 + 1
  = 1010
_______________________________
  NOW IF WE TAKE & OF x AND x"
  0110
& 1010
--------
  0010
  WE GET TO KNOW THE RIGHT MOST BIT THAT IS RIGHT MOST 1 BIT 
  SO THIS WAS THE CONCEPT OF RIGHT MOST SET BIT 
  */
//KERNIGHAN_ALGO:
//---------------
/*
N = N - RSBM
TILL N !=0 
AND DO COUNT++
THIS WILL GIVE TOTAL 1 
TIME COMPLEXITY IS REDUCED
EG:
  N = 101011
- R = 000001
 -------------
      101010 ->COUNT =1
____________________________________
  
  N = 101010
- R = 000010
 -------------
      101000 ->COUNT =2
____________________________________
  N = 101000
- R = 001000
 -------------
      100010 ->COUNT =3
____________________________________
  N = 100000
- R = 100000
 -------------
      000000 ->COUNT =4
____________________________________
 LOOP ENDS AS N=0;
 RETURN COUNT 
 R IS RIGHT MOST BIT MASK 
 */
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int kernighan_algo(int n)
{
    int count=0;
    while(n)
    {
       // int rsbm=(n & (-n));
      //any can be used to calculate rsbm
        int rsbm=(n & ((~n )+ 1));
        n=n-rsbm;
        count++;
    }
    return count;
}
int main()
{
    int n=123;
   cout<<kernighan_algo(n);
    return 0;
}
