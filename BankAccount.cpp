#include <iostream>
#include <string>

using namespace std;

class Make_account {
public:
	Make_account(string Owner_name, int Initial_balance) {
		if (Initial_balance > 0) {
			balance = Initial_balance;
		}
		else cout << "Initial balance must be positive." << endl;
		owner_name = Owner_name;
	}

public:
	string getOwner_name() {
		return owner_name;
	}

	int balance = 0;

public:
	void deposit(int money) {
		if (money > 0) {
			balance = balance + money;
		}
		else cout << "Cannot deposit negative." << endl;
	}

	void withdraw(int money) {
		if (money > 0) {
			if (balance - money >= 0) {
				balance = balance - money;
			}
			else cout << "Balance is not enough to withdraw." << endl;
		}
		else cout << "Withdraw request should be positive." << endl;
	}


private:
	string owner_name;


};

int main() {
	Make_account acc1("Paul", 100);

	cout << "Owner's name: " << acc1.getOwner_name() << endl;
	cout << "Initial balance: " << acc1.balance << endl << endl;

	
	cout << "Depositing $50 Please wait... " << endl;
	acc1.deposit(50);
	cout << "Balance after Deposit: " << acc1.balance << endl << endl;

	cout << "Withdrawing $50 Please wait.... " << endl;
	acc1.withdraw(50);
	cout << "Current balance after withdraw: " << acc1.balance << endl;
	
	return 0;
}
