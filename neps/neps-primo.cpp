#include <iostream>

using namespace std;

bool eh_primo(int x){
    int counter = 0;
    if (x == 1)
        return false;
    for (int i = 1; i <= x; ++i) {
        if (x % i == 0)
            ++counter;
        if (counter == 3)
            return false;
    }
    return true;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}

