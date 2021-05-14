#include <iostream>

using namespace std;

string title(string F){
    size_t size = F.size();
    int j = 0;
    for (size_t i = 0; i < size; ++i) {
        if (j == 0 && (F[i] >= 'a' && F[i] <= 'z')) {
            F[i] = (char)(F[i] - ('a' - 'A'));
        } else if (j != 0 && (F[i] >= 'A' && F[i] <= 'Z')) {
            F[i] = (char)(F[i] + ('a' - 'A'));
        }

        ++j;
        if (F[i] == ' ')
            j = 0;
    }
    return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
