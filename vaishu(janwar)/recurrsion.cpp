#include<iostream>
using namespace std;
/*void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print(n-1);
    cout<<n<<endl;
}




main()
{
    int n;
    cin>>n;
    print(n);
}*/
bool sorted(int arr[n])
{
if(n==1){
    return true;
}


bool restsorted=sorted(arr+1,n-1);
return (arr[0]<arr[1] && restsorted);
}
main()
{
    int arr[4]={6,2,3,7};

    cout<<sorted(arr[4])<<endl;
    
}









