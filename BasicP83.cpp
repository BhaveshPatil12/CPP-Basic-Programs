#include<iostream>
using namespace std;
int ProDivSum(int n)
{
    int sum = 1,sqrt;
    for (int i=2; i<=sqrt; i++)
    {
        if (n%i == 0)
        {
            sum += i;

            if (n/i != i)
                sum += n/i;
        }
    }
    return sum;
}
bool chkAmicable(int a,int b)
{
    return(ProDivSum(a) == b && ProDivSum(b) == a);
}
int ChkPairs(int arr[],int num1)
{
    int ctr = 0;
    for (int i=0; i<num1; i++)
        for (int j=i+1; j<num1; j++)
            if (chkAmicable(arr[i], arr[j]))
                ctr++;
    return ctr;
}
int main()
{
   int nn;
    int n, i, j, ctr;
 cout << "\n\n Count the Amicable pairs in a specific array: \n";
 cout << " Sample pairs : (220, 284)(1184,1210) (2620,2924) (5020,5564) (6232,6368)... \n";
  cout << "\n Input the number of elements to be stored in the array: ";
       cin>>nn;
      int arr1[nn];
       for(i=0;i<nn;i++)
            {
	      cout<<"element - "<<i<<": ";
	      cin>>arr1[i];
	    }  
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout <<" Number of Amicable pairs presents in the array: "<< ChkPairs(arr1, n1) << endl;
    return 0;
}