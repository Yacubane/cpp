#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>

#include "Tree.h"
#include "TreeKey.h"

std::string searchType;

Tree generator() {
    return Tree();
}

bool comparator(const Tree &l, const Tree &r) {
    return l.getDiameter() < r.getDiameter();
}

bool countIfFunction(const Tree &tree) {
    return tree.getType() == searchType;
}

void foreachFunction(Tree &tree) {
    tree.setDiameter(tree.getDiameter() + 0.1);
}
bool removeIfFunction(const Tree &tree) {
    return tree.getDiameter() > 1;
}


int main() {
    srand(time(NULL));

    std::vector<Tree> vector;
    vector.push_back(Tree("Dąb", 1, 20));
    vector.push_back(Tree("Dąb", 1, 20));
    vector.push_back(Tree("Dąb", 2, 20));
    vector.push_back(Tree("Dąb", 3, 20));

    for (std::vector<Tree>::iterator it = vector.begin(); it != vector.end(); ++it)
        std::cout << *it << std::endl;

    std::cout << '\n';

    std::set<Tree> set;

    //for (std::vector<Tree>::iterator it = vector.begin() ; it != vector.end(); ++it)
    //    set.insert(*it);

    set.insert(Tree("Dąb", 1, 20));
    set.insert(Tree("Dąb", 1, 20));
    set.insert(Tree("Dąb", 2, 20));
    set.insert(Tree("Dąb", 3, 20));
    set.insert(Tree());
    set.insert(Tree());

    for (std::set<Tree>::iterator it = set.begin(); it != set.end(); ++it)
        std::cout << *it << std::endl;

    std::cout << '\n';

    std::map<TreeKey, Tree> map;
    Tree tmp;
    tmp = Tree("Brzoza", 1, 20);
    map.insert(std::pair<TreeKey, Tree>(tmp.getKey(), tmp));
    tmp = Tree("Brzoza", 1, 20);
    map.insert(std::pair<TreeKey, Tree>(tmp.getKey(), tmp));
    tmp = Tree("Brzoza", 2, 30);
    map.insert(std::pair<TreeKey, Tree>(tmp.getKey(), tmp));

    for (std::map<TreeKey, Tree>::iterator it = map.begin(); it != map.end(); ++it)
        std::cout << it->first << " => " << it->second << '\n';

    std::cout << '\n';

    std::vector<Tree> vector2(8);
    std::generate(vector2.begin(), vector2.end(), generator);
    for (std::vector<Tree>::iterator it = vector2.begin(); it != vector2.end(); ++it)
        std::cout << *it << std::endl;

    std::cout << '\n';

    std::vector<Tree>::iterator result = std::min_element(vector2.begin(), vector2.end(), comparator);

    std::cout << vector2[std::distance(std::begin(vector2), result)] << std::endl;

    std::cin >> searchType;
    int num = std::count_if(vector2.begin(), vector2.end(), countIfFunction);
    std::cout << "Num of items: " << num << std::endl;
    std::cout << '\n';

    std::cout << "Foreach: " << std::endl;
    std::for_each(vector2.begin(), vector2.end(), foreachFunction);

    for (std::vector<Tree>::iterator it = vector2.begin(); it != vector2.end(); ++it)
        std::cout << *it << std::endl;
    std::cout << '\n';

    std::cout << "Remove if: " << std::endl;
    vector2.erase(std::remove_if(vector2.begin(), vector2.end(), removeIfFunction), vector2.end());

    for (std::vector<Tree>::iterator it = vector2.begin(); it != vector2.end(); ++it)
        std::cout << *it << std::endl;


    return 0;
}