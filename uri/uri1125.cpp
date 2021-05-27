#include <iostream>
#include <vector>
#include <algorithm>

const int MAX_PILOTS = 100;

struct Pilot {
    int id;
    int points;
    std::vector<int> pos;
};

int compare(struct Pilot a, struct Pilot b)
{
    if (a.points != b.points)
        return a.points > b.points;
    else
        return a.id < b.id;
}

int main(void)
{
    int gp;
    int pilotsQty;
    int tmp;
    int scoreTypes;
    int scoringPos;
    int scorePoints;
    int count;

    while (true) {
        // Make sure pilotList goes out of scope every iteration.
        struct Pilot pilotList[MAX_PILOTS];
        //std::vector<int> scorePoints;

        std::cin >> gp >> pilotsQty;
        if (gp == 0 && pilotsQty == 0)
            break;

        // Initialize struct and get finish positions
        for (int i = 0; i < gp; ++i) {
            for (int j = 0; j < pilotsQty; ++j) {
                std::cin >> tmp;
                pilotList[j].id = j+1;
                pilotList[j].points = 0;
                pilotList[j].pos.push_back(tmp);
            }
        }

        // For each scoring type
        std::cin >> scoreTypes;
        for (int i = 0; i < scoreTypes; ++i) {
            // Get points for for pilots for each scoring type
            std::cin >> scoringPos;
            for (int j = 0; j < scoringPos; ++j) {
                std::cin >> scorePoints;
                for (int k = 0; k < pilotsQty; ++k) {
                    count = (int)std::count(pilotList[k].pos.begin(),
                            pilotList[k].pos.end(), j+1);
                    pilotList[k].points += count * scorePoints;
                }
            }

            // Sort pilots and print ranking
            std::sort (pilotList, pilotList + pilotsQty, compare);
            for (int k = 0; k < pilotsQty; ++k) {
                if (k == pilotsQty - 1) {
                    std::cout << pilotList[k].id;
                } else if (pilotList[k].points != pilotList[k+1].points) {
                    std::cout << pilotList[k].id;
                    break;
                } else {
                    std::cout << pilotList[k].id << " ";
                }
            }
            std::cout << std::endl;

            // Clear points
            for (int k = 0; k < pilotsQty; ++k)
                pilotList[k].points = 0;
        }
    }
    return 0;
}

