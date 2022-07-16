#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        for (int i=1; i<=n; i++) {
            cin>>arr[i];
        }
        int bribe=0;
        bool ischaotic=false;
        for (int i=n; i>=1; i--) {
            if (arr[i]!=i) {
                if (i-1>0 and arr[i-1]==i) {
                    swap(arr[i],arr[i-1]);
                    bribe++;
                }
                else if (i-2>0 and arr[i-2]==i) {
                    swap(arr[i-2],arr[i-1]);
                    swap(arr[i-1],arr[i]);
                    bribe+=2;
                }
                else{
                    cout<<"Too chaotic"<<endl;
                    ischaotic=true;
                    break;
                }
            }
        }
        if (ischaotic==false){
            cout<<bribe<<endl;
        }
    }
    return 0;
}