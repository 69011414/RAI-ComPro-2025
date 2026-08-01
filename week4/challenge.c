#include <stdio.h>

int main(void) {
    double balance = 0.0;
    int choice;
    double amount;

    do {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount <= 0) {
                    printf("Invalid withdrawal amount.\n");
                } else if (amount > balance) {
                    printf("Insufficient funds.\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful.\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM.\n");
                break;

            default:
                printf("Invalid option. Please choose 1-4.\n");
        }

    } while (choice != 4);

    return 0;
}