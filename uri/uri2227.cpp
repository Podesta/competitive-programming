#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
    int nAirports = 0;      // Amount of airports
    int nFlights = 0;       // Amount of flights
    int temp1 = 0;          // Insert elements into vector   
    int temp2 = 0;          // Insert elements into vector 
    int crowded = 0;        // Amount of flights at crowded airport
    int tempCrowded = 0;    // To compare with crowded airport
    int nCase = 0;          // Store amount of cases
    std::vector<int> flights;       // Store all flights in a vector
    std::vector<int> airCrowded;    // Code of crowded airport

    std::cin >> nAirports >> nFlights;
    do {
        // Store flights into vector
        for (int i = 0; i < nFlights; ++i) {
            std::cin >> temp1 >> temp2;
            flights.push_back(temp1);
            flights.push_back(temp2);
        }

        // Count flights from each airport
        for (int i = 1; i <= nAirports; ++i) {
            tempCrowded = (int)count(flights.begin(), flights.end(), i);
            if (tempCrowded > crowded) {
                crowded = tempCrowded;
            }
        }

        // Check if another airport is crowded
        for (int i = 1; i <= nAirports; ++i) {
            tempCrowded = (int)count(flights.begin(), flights.end(), i);
            if (tempCrowded == crowded) {
                airCrowded.push_back(i);
            }
        }

        ++nCase;
        // Print results
        std::cout << "Teste " << nCase << std::endl;
        for (size_t i = 0; i < airCrowded.size(); ++i)
            std::cout << airCrowded[i] << ' ';
        std::cout << std::endl << std::endl;

        // Reset values
        crowded = 0;
        airCrowded.clear();
        flights.clear();
        std::cin >> nAirports >> nFlights;
    } while ((nAirports != 0) && (nFlights != 0));

    return 0;
}
