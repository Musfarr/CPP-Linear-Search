#include <iostream>

using namespace std;


void linearsearch(int a[] , int num){
int flag = -1;
for (int i = 0; i < 6; i++)
{
    if (a[i]== num)
    {
        cout<<"num found at index:"<<i<<endl;
        flag = 0;
    }   
}
if (flag == -1)
{
    cout<<"no number found"<<endl;
}
}


int main(){

int arr[6] = {3,5,6,8,3,6};
linearsearch(arr , 6);


return 0;
}