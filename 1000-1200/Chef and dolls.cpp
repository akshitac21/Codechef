#include <iostream>
using namespace std;
# define INT_MAX 100001
int main() {
	int t;
	cin>>t;
	
	
	int arr[INT_MAX];
	int count=0;
	
	while(t--){
	    
	    int size;
	    cin>>size;
	    
	    int ans=0;
	    
	    for(int i=0; i<size; i++){
	        int a;
	        cin>>a;
	        ans ^= a;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
