#include<bits/stdc++.h>
using namespace std;

#define MAX 500

int multiply(int x, int res[], int res_size);
void factorial(int n)
{
    int res[MAX];

    res[0] = 1;
    int res_size = 1;
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
    int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    for (int i=res_size-1; i>=0; i--)
        if(res[i]==0){
          zero++;
        }
        else if(res[i]==1){
          one++;
        }
        else if(res[i]==2){
          two++;
        }
        else if(res[i]==3){
          three++;
        }
        else if(res[i]==4){
          four++;
        }
        else if(res[i]==5){
          five++;
        }
        else if(res[i]==6){
          six++;
        }
        else if(res[i]==7){
          seven++;
        }
        else if(res[i]==8){
          eight++;
        }
        else{
          nine++;

        }
        cout<<n<<"! –"<<endl;
        cout<<"    (0)    "<<zero<<"    (1)    "<<one<<"    (2)    "<<two<<"    (3)    "<<three<<"    (4)    "<<four<<endl;;
        cout<<"    (5)    "<<five<<"    (6)    "<<six<<"    (7)    "<<seven<<"     (8)     "<<eight<<"    (9)     "<<nine<<endl;;
      //  cout<<n<<"! --"<<endl;
          //  cout<<"    (0)    "<<zero<<"    (1)    "<<one<<"    (2)    "<<two<<"    (3)    "<<three<<"    (4)    "<<four<<endl;
          //  cout<<"    (5)    "<<five<<"    (6)    "<<six<<"    (7)    "<<seven<<"     (8)    "<<eight<<"    (9)    "<<nine<<endl;
}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;

        res[i] = prod % 10;
        carry  = prod/10;
    }

    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

int main()
{
    int n;
    while(cin>>n){
    factorial(n);
  }
    return 0;
}
