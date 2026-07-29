#include<iostream>
using namespace std;

int main(){
	
    int rows;
    cout<<"How many rows do you want to display? ";
    cin>>rows;

    for(int r=0; r<rows; r++){
        int term=1;
        for(int c=0; c<=r; c++){
            cout<<term<<" ";
            int next_term = (term * (r - c)) / (c + 1);
            term = next_term;
        }
        cout<<endl;
    }
    return 0;
}


