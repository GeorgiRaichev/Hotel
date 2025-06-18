#pragma once

template <typename T>
class MyVector {
private:
    T* data;
    int size_;
    int capacity;

    void copyFrom(const MyVector<T>& other);
    void free();
    void resize();

public:
    MyVector();
    MyVector(const MyVector<T>& other);
    MyVector<T>& operator=(const MyVector<T>& other);
    ~MyVector();

    void push_back(const T& element);
    void removeAt(int index);
    void clear();

    int size() const;
    bool empty() const;

    T& operator[](int index);
    const T& operator[](int index) const;
};

#include "MyVector.tpp"
