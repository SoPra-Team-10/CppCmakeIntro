#ifndef HUFFMANENCODING_TREE_HPP
#define HUFFMANENCODING_TREE_HPP

#include <vector>
#include <memory>
#include <variant>
#include <functional>
#include <list>

template <typename T>
class Tree {
public:
    using ChildType = std::shared_ptr<Tree<T>>;
    using ChildrenType = std::vector<ChildType>;

    Tree() = default;

    explicit Tree(const T& t) : data{t} {};

    void addChild(const ChildType& child);
    void addChild(const Tree<T>& child);

    auto isLeaf() const noexcept -> bool;

    auto getChildren() const -> ChildrenType;

    auto getNode() const -> T;

private:
    ChildrenType children;
    T data;
};

template<typename T>
auto Tree<T>::isLeaf() const noexcept -> bool {
    return children.size() == 0;
}

template<typename T>
void Tree<T>::addChild(const ChildType &child) {
    this->children.emplace_back(child);
}

template<typename T>
auto Tree<T>::getChildren() const -> Tree::ChildrenType {
    return this->children;
}

template<typename T>
auto Tree<T>::getNode() const -> T {
    return this->data;
}

template<typename T>
void Tree<T>::addChild(const Tree<T> &child) {
    this->addChild(std::make_unique<Tree<T>>(child));
}

#endif //HUFFMANENCODING_TREE_HPP