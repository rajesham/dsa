#include <iostream>
#include <unordered_set>
#include <list>

using namespace std;

void
delDuplicates(list<int> &list_)
{
    unordered_set<int> visited;
    list<int>::iterator liter = list_.begin();
    while (liter != list_.end()) {
        if (visited.find(*liter) != visited.end()) {
            liter = list_.erase(liter);
        } else {
            visited.emplace(*liter); 
            ++liter;
        }
    }
}

int
main(void)
{
    list<int> list = {10, 12, 11, 11, 12, 11, 10};
    delDuplicates(list);
    for (int i : list) {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}
