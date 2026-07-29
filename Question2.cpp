#include <iostream>
using namespace std;

int main(){
    char choice;
    
    do{
        int num;
        cout<<"Enter a Positive Number: ";
        cin>>num;
        while(num <= 0){
        	cout<<"Enter a Positive Number: ";
        	cin>>num;
		}
		int original_num = num;
		int prime = 0;
        while(num > 0){
        int count = 0; 
        int remainder = num % 10;
        for(int i=1; i<=remainder; i++){
        	if(remainder % i == 0){
        		count++;
			}
		}
		if(count == 2){
			prime++;
		}
		num /= 10;
		}
		cout<<original_num<<" has "<<prime<<" Prime digits.";
        
        int attempts = 3;
        while(attempts > 0){
            cout<<"\n\nDo you want to continue? (Y/N): ";
            cin>>choice;

            if(choice == 'Y' || choice == 'y'){
                break;
			}
            else if(choice == 'N' || choice == 'n'){
            	cout<<"Thanks for using our system!";
            	return 0;
			}
			else{
				attempts--;
                cout<<"Invalid\n";
                cout<<"You have "<<attempts<<" chances remaining! ";
			}
			if(attempts == 0){
                cout<<"Too many invalid attempts. Program terminated.\n";
                return 0;
            	}             	
        	}
		
			             
        }while(choice == 'Y' || choice == 'y');

    return 0;
}
