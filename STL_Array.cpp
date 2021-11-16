#include<iostream>
#include<array>

using namespace std;

/**/
int main() {
    int basic[3] = { 1,2,3 };

    array<int, 4> a = { 1,2,3,4 }; //It is static

    int size = a.size();

    for (int i = 0; i < size; i++) {
        cout << a[i] << "\n";
    }

    cout << "Element at index 3: " << a.at(3) << "\n";

    cout << "Empty or not : " << a.empty() << "\n";

    cout << "First Element: " << a.front() << "\n";

    cout << "Last Element: " << a.back() << "\n";

}