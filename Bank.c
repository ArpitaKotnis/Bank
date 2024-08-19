#include <stdio.h>

#define INITIAL_BALANCE 1000

void deposit(float *balance, float amount) {
    *balance += amount;
    printf("Deposited: %.2f\n", amount);
}

void withdraw(float *balance, float amount) {
    if (amount > *balance) {
        printf("Insufficient funds.\n");
    } else {
        *balance -= amount;
        printf("Withdrawn: %.2f\n", amount);
    }
}

void check_balance(float balance) {
    printf("Current balance: %.2f\n", balance);
}

int main() {
    float balance = INITIAL_BALANCE;
    int choice;
    float amount;

    while (1) {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&balance, amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&balance, amount);
                break;
            case 3:
                check_balance(balance);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
}
