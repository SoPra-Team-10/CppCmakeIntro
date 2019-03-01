#include <iostream>
#include <fstream>
#include <array>
#include <set>
#include <algorithm>
#include <optional>
#include <sstream>

#include "Tree.hpp"

using NodeType = std::pair<std::optional<char>, double>;

void printHufman(std::ostream &ostream, const Tree<NodeType> &tree, const std::vector<bool> &code = {}) {
    if (tree.isLeaf()) {
        auto val = tree.getNode().first.value_or('\0');
        if (std::isalnum(val)) {
            ostream << val << ":\t";
            for (const auto &b : code) {
                ostream << b;
            }
            ostream << "\n";
        }
    } else {
        auto c = 0;
        for (const auto &child : tree.getChildren()) {
            auto extended{code};
            extended.emplace_back(static_cast<bool>(c++));
            printHufman(ostream, *child, extended);
        }
    }
}


int main() {
    std::ifstream file("main.cpp", std::ios::binary);
    if(!file.is_open()) {
        std::cerr << "Could not open file" << std::endl;
        std::exit(-1);
    }
    std::array<int,256> occurences{0};
    auto length = 0;
    int read;
    while((read = file.get()) != EOF) {
        occurences[read]++;
        length++;
    }

    auto setComp = [](const auto &a, const auto &b) {
        return a.getNode().second > b.getNode().second;
    };

    std::set<Tree<NodeType>, decltype(setComp)> treeList(setComp);
    for (auto c = 0; c < 256; c++) {
        treeList.emplace(std::make_pair<std::optional<char>, double>(
                static_cast<char>(c), static_cast<double>(occurences[c])/length));
    }

    while (treeList.size() > 1) {
        auto last = *(++treeList.rend());
        treeList.erase(last);
        auto secondLast = *(++treeList.rend());
        treeList.erase(secondLast);

        Tree<NodeType> combined{std::make_pair<std::optional<char>,double>(
                std::nullopt, last.getNode().second + last.getNode().second)};
        combined.addChild(last);
        combined.addChild(secondLast);

        treeList.emplace(combined);
    }

    printHufman(std::cout, *treeList.begin());

    return 0;
}
