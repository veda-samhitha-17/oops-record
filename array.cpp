#include <iostream>
using namespace std;

class emp {
    char name[20];
    float age;
public:
    void get(void);
    void put(void);
};

void emp::get(void) {
    cout << "Enter name: ";
    cin >> name;   // Use cin.getline(name, 20); if you want to accept spaces
    cout << "Enter age: ";
    cin >> age;
}

void emp::put(void) {
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
}

const int size = 3;

int main() {
    emp manager[size];

    // Input loop: start from 0
    for (int i = 0; i < size; i++) {
        cout << "Manager details for manager " << i << ":\n";
        manager[i].get();
    }

    // Output loop: don't increment inside cout
    for (int i = 0; i < size; i++) {
        cout << "Manager " << i << " details:\n";
        manager[i].put();
    }

    return 0;
}
