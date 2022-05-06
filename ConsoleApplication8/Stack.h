#pragma once
#include <iostream>
#include <string>
using namespace std;
long  ChekIsValueInt(string(value)) {
    long temp;
    temp = stoi(value);
    if (temp > 2147483647) {
        throw (string)"Err! value is greater then int ";
    }
    else if (temp < -2147483648) {
        throw (string)"Err! value is less then int ";
    }
    return temp;
}
template <typename T>class Node {
public:
    T value;
    Node* next;
    Node* prev;
    Node()
    {
        this->next = nullptr;
        this->prev = nullptr;
    }
    Node(T value) :Node()
    {
        this->value = value;
    }
    T GetValue()
    {
        return this->value;
    }
};
template <typename T>class Stack {
private:
    Node<T>* head;
    Node<T>* tail;
    uint32_t length;
    uint32_t count;
public:
    Stack(uint32_t lengthP)
    {
        this->head = nullptr;
        this->tail = nullptr;
        this->length = lengthP;
        this->count = 0;
    }
    bool Push(T elem)
    {
        uint32_t temp = count;
        Node<T>* node_elem = new Node<T>(elem);
        if (count == 0)
        {
            head = tail = node_elem;
        }
        else {
            tail->next = node_elem;
            node_elem->prev = tail;
            tail = node_elem;
        }
        count++;
        if (count == temp) {
            throw (string)"Size did not change ! ";
        }
        else if (count>length) {
            throw (string)"Stack is full!";
        }
        return true;
    }
    bool Pop()
    {
        Node<T>* node_elem = new Node<T>();
        node_elem = tail;
        if (tail == nullptr) {
            throw (string)"Stack is empty!";
        }
        tail = node_elem->prev;
        tail->next = nullptr;
        delete node_elem;
        count--;
        return true;
    }
    uint32_t size()
    {
        return  count;
    }
    bool empty()
    {
        return (count == 0) ? true : false;
    }
    T Top()
    {
        if (count == 0)
        {
            throw (string)"Stack is empty!";
        }
        else {
            return tail->GetValue();
        }
    }
};
 

