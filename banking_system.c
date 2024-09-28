/*
  Basic Banking System:
   Develop a simple banking system that allows users to login , check their balance, and withdraw money.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

struct AccountDetails{
	char username[10];
	char email[20];
	char password[10];
	float balance;
};

void print_account_details (struct AccountDetails User){
	printf("[+] Account Details : \n\n");
	printf("Username : %s\n",User.username);
	printf("Email : %s\n",User.email);
	printf("\n\n------\n\n");
}

bool is_authenticated (char username[225], char password[225], struct AccountDetails User) {
	
	if (strcmp(username, User.username) == 0 && strcmp(password, User.password) == 0){
		printf("[+] Welcome : %s\n", username);
		return true;
	}else{
		printf("\nInvalid Data\n");
		return false;
	}
}

void show_options (){
	printf("1) Account Details\n");
	printf("2) Check Balance\n");
	printf("3) Withdraw\n");
	printf("4) Quit\n");
	
}

void check_balance (struct AccountDetails User){
	printf("[+] Check Balance \n\n");
	printf("Your Current Balance : %.2f EGP\n\n", User.balance);

}

struct AccountDetails withdraw_money (struct AccountDetails User){
	printf("[+] Withdraw Money\n\n");
	int amount;
	printf("Enter The Amount : ");
	scanf("%i", &amount);


	if (amount > User.balance){
		printf("No enought balance in your account.\n\n");
		return User;
	}

	User.balance = User.balance - amount;
	printf("Mission Completed Successfully\n\n");
	return User;
}


void main (){

	struct AccountDetails User;
	User.balance = 3000;

	strcpy(User.username, "radwan");
	strcpy(User.email, "radwan@gmail.com");
	strcpy(User.password, "admin");


	char username[225];
	char password[225];

	printf("Enter Your Username : ");
	scanf("%99s", &username);

	printf("\nEnter Your Password : ");
	scanf("%99s", &password);


	if (!is_authenticated(username, password, User)){
		return;
	}


	while (1)
	{
		show_options();
		int op;
		printf(">>> ");
		scanf("%i", &op);

		if (op == 4){
			break;
		}

		switch (op)
		{
			case 1:
				print_account_details(User);
				break;

			case 2:
				check_balance(User);
				break;
			case 3:
				User = withdraw_money(User);
				break;

			default:
				printf("Please Enter Correct Choice !\n");
				break;
		}
	}
	
	
}