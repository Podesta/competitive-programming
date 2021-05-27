#include <iostream>
#include <algorithm>
#include <vector>

const int MAX_COUNTRY = 100;

struct Country {
    int id;
    int gold;
    int silver;
    int bronze;
};

int compare(struct Country a, struct Country b)
{
    if (a.gold != b.gold)
        return a.gold > b.gold;
    else if (a.silver != b.silver)
        return a.silver > b.silver;
    else if (a.bronze != b.bronze)
        return a.bronze > b.bronze;
    else
        return a.id < b.id;
}

int main(void)
{
    int countryQty;
    int sports;

    // Track the countries id, each sport loop
    int gold;
    int silver;
    int bronze;

    std::cin >> countryQty >> sports;
    struct Country countries[MAX_COUNTRY];

    // Initialize all structs
    for (int i = 0; i < countryQty; ++i) {
        countries[i].id = i+1;
        countries[i].gold = 0;
        countries[i].silver = 0;
        countries[i].bronze = 0;
    }

    // Add medals to countries
    for (int i = 0; i < sports; ++i) {
        std::cin >> gold >> silver >> bronze;
        --gold;
        --silver;
        --bronze;
        ++countries[gold].gold;
        ++countries[silver].silver;
        ++countries[bronze].bronze;
    }

    // Sort countries
    std::sort(countries, countries + countryQty, compare);

    // Print countries order
    for (int i = 0; i < countryQty; ++i)
        std::cout << countries[(size_t)i].id << " ";
    std::cout << std::endl;

    return 0;
}
