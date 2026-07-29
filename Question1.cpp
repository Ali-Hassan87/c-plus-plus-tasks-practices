#include <iostream>
using namespace std;

int main(){
    char choice;
    
    do{
        int num;
        cout<<"Enter a Positive Number greater then 0: ";
        cin>>num;
        while(num <= 0){
        	cout<<"Enter a Positive Number greater then 0: ";
        	cin>>num;
		}
		
		int original_num = num;
		int reverse = 0;
		int oddcount = 0;
		
        while(num > 0){
        int remainder = num % 10;
        if(remainder % 2 != 0)
        	oddcount++;	
        reverse = reverse * 10 + remainder;
        num /= 10;
    	}
    	if(original_num == reverse)
    		cout<<original_num<<" is a Palindrome Number.";
    	else
    		cout<<original_num<<" is NOT a Palindrome Number.";

		cout<<"\nTotal Odd digits are: "<<oddcount<<endl;
		int original_odd = oddcount;
		reverse = 0;
		while(oddcount > 0){
        int remainder = oddcount % 10;	
        reverse = reverse * 10 + remainder;
        oddcount /= 10;
    	}
    	if(original_odd == reverse)
    		cout<<original_odd<<" is a Palindrome.";
    	else
    		cout<<original_odd<<" is NOT a Palindrome.";
        
        
        int attempts = 3;
        do {
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
                cout<<"Invalid\n";
                attempts--;
                cout<<"You have "<<attempts<<" chances remaining!";
			}
			if(attempts == 0){
                cout<<"Too many invalid attempts. Program terminated.\n";
                return 0;
            	} 
            	
        	}while(choice != 'Y' || choice != 'y' || choice != 'N' || choice != 'n');
		
			             
        }while(choice == 'Y' || choice == 'y');

    return 0;
}