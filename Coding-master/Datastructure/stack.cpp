#includ<bits/stdc++.h>
using namespace std;

int main(){
	stack <int> q;
	int x,i,n;
	char c;
	while(1){
	cin >> c;
	if(c=='i' || c=='I'){
		cin >> x;		
		q.push(x);
	}
	else if(c=='d' || c=='D'){
		x=q.top();
		cout << x << endl;
		q.pop();
	}
	else if(c=='p' || c=='P'){
		n=q.size();
		for(i=0;i<n;i++){
			x=q.top();
			cout << x << endl;
			q.pop();
		}
	}
 	else if(c=='q' || c=='Q'){
 		return 0;
 	}
  }
return 0;
}
