# include <iostream>

using namespace std;
int main(){
    int arr[20]={26,17,82,90,17,716,24,87,89,10};
    int count=0;

    for(int i=0;i<sizeof(arr);i++){
        if(arr[i]%2==0){
            count++;
        }
    }

    cout<< count;
    return 0;
}