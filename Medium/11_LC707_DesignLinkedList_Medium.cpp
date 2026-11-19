class MyLinkedList {
public:
    list<int> l;

    MyLinkedList() {
    }

    int get(int index) {
        if (index < 0 || index >= l.size())
            return -1;

        auto it = l.begin();
        advance(it, index);

        return *it;
    }

    void addAtHead(int val) {
        l.push_front(val);
    }

    void addAtTail(int val) {
        l.push_back(val);
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > l.size())
            return;

        auto it = l.begin();
        advance(it, index);

        l.insert(it, val);
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= l.size())
            return;

        auto it = l.begin();
        advance(it, index);

        l.erase(it);
    }
};
