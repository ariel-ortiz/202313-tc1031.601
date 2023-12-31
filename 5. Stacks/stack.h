#pragma once

#include <stdexcept>

template<typename T>
class Stack {

public:

    Stack(const Stack&) = delete;
    Stack<T>& operator=(const Stack&) = delete;

    // Complexity: O(1)
    Stack(int capacity)
    {
        _capacity = capacity;
        _data = new T[_capacity];
        _top = 0;
    }

    // Complexity: O(1)
    ~Stack()
    {
       delete [] _data;
    }

    // Complexity: O(1)
    void push(T value)
    {
        if (_top == _capacity) {
            throw std::overflow_error("Stack overflow");
        }
        _data[_top] = value;
        ++_top;
    }

    // Complexity: O(1)
    T pop()
    {
        if (_top == 0) {
            throw std::underflow_error("Stack underflow");
        }
        --_top;
        return _data[_top];
    }

    // Complexity: O(1)
    T peek() const
    {
        if (_top == 0) {
            throw std::underflow_error("Stack underflow");
        }
        return _data[_top - 1];
    }

    // Complexity: O(1)
    int size() const
    {
        return _top;
    }

    // Complexity: O(1)
    int capacity() const
    {
        return _capacity;
    }

    // Complexity: O(1)
    bool is_empty() const
    {
        return size() == 0;
    }

    // Complexity: O(1)
    void clear()
    {
        _top = 0;
    }

private:

    T* _data;
    int _capacity;
    int _top;
};
