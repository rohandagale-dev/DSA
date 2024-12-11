#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    std::vector<int> banned = {1, 2, 3, 2, 4};

    // Initialize unordered_set using a range of iterators
    std::unordered_set<int> bannedSet(banned.begin(), banned.end());

    // Print elements in the unordered_set
    std::cout << "Elements in bannedSet: ";
    for (const auto &elem : bannedSet)
    {
        std::cout << elem << " ";
    }
    cout << bannedSet.count(5) << endl;
    cout << endl;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}