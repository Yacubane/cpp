//
// Created by jakubdybczak on 5/21/19.
//

#ifndef LAB5_LIST_H
#define LAB5_LIST_H

#include <iostream>
#include <memory>

template<class T>
class Node {
    T data;
    std::unique_ptr<Node<T>> next;
public:
    Node(T data) : data(data), next(nullptr) {}

    void setNext(std::unique_ptr<Node<T>> next_) {
        next = std::move(next_);
    }

    std::unique_ptr<Node<T>> getNext() {
        return std::move(next);
    }

    T getData() {
        return data;
    }

    void print(std::ostream &stream) {
        stream << data << std::endl;
        if (next != nullptr)
            next->print(stream);
    }
};


template<class T>
class List {
private:
    std::unique_ptr<Node<T>> root;
public:
    List() : root(nullptr) {}

    void insert(T val);

    void removeFirst();

    friend std::ostream &operator<<(std::ostream &stream, const List &list) {
        if (list.root != nullptr)
            list.root->print(stream);
        return stream;
    }
};

template<class T>
void List<T>::insert(T val) {
    if (root == nullptr) {
        root = std::make_unique<Node<T>>(val);
    } else {
        std::unique_ptr<Node<T>> ptr = std::make_unique<Node<T>>(val);
        ptr->setNext(std::move(root));
        root = std::move(ptr);
    }
}

template<class T>
void List<T>::removeFirst() {
    if (root == nullptr) return;
    root = std::move(root->getNext());
}


#endif //LAB5_LIST_H
