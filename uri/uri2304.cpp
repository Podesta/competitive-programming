#include <iostream>

int main(void) {
    int start = 0;      // Starting money from each player
    int loop = 0;       // Amount of transactions
    char tran = 0;      // Keep track of the transactions
    int money[3] = {0}; // Amount of money of each player.
                        // Order is Dalia, Eloi, Felix
    char per1 = 0;      // First person on transaction
    char per2 = 0;      // Second person on transaction
    int spent = 0;      // Money spent or earned in transaction



    std::cin >> start >> loop;

    // Assign starting money to all players
    for (int i = 0; i < 3; ++i)
        money[i] = start;

    // Start on transactions
    for (int i = 0; i < loop; ++i) {
        std::cin >> tran;           // Get transaction
        if (tran == 'C') {          // Purchase
            std::cin >> per1 >> spent;
            money[per1 - 'D'] -= spent;
        } else if (tran == 'V') {   // Sale
            std::cin >> per1 >> spent;
            money[per1 - 'D'] += spent;
        } else if (tran == 'A') {   // Rent
            std::cin >> per1 >> per2 >> spent;
            money[per1 - 'D'] += spent;
            money[per2 - 'D'] -= spent;
        }
    }

    // Print results
    std::cout << money[0] << ' ' << money[1] << ' ' << money[2] << std::endl;
    return 0;
}
