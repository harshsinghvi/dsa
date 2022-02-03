#include<iostream>

using namespace std;

class Node{
    public:
        int *next, *prev, data;
        void print(char end = '\n') {cout<<data<<end;}
};

// template <class T>
class LinkedList{
    private:
        int *head;
        int length = 0;
        int cursor;
        
    public:
        LinkedList(){ head = NULL;}
        LinkedList(){ head = NULL;}
};

