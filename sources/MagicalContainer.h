//
// Created by Segev on 24/05/2023.
//

#ifndef MAGICAL_ITERATORS_A_MAGICALCONTAINER_H
#define MAGICAL_ITERATORS_A_MAGICALCONTAINER_H

#include <vector>
#include <iostream>
class AscendingIterator;

class MagicalContainer {
private:
    std::vector<int> dArray;

public:
//    MagicalContainer(); //default
//    MagicalContainer(MagicalContainer &other); // copy
//    ~MagicalContainer(); //destructor
//    MagicalContainer &operator=(const MagicalContainer &other);

    void addElement(int element);

    void removeElement(int element);

    int size() const;

//    AscendingIterator ascendingBegin() const;
//    AscendingIterator ascendingEnd() const;

    friend class AscendingIterator;
};

class AscendingIterator {
private:
    const MagicalContainer &cont;
    int curr;

public:
    AscendingIterator(const MagicalContainer &cont, int curr = 0);

    AscendingIterator(const AscendingIterator &other);

//    AscendingIterator &operator=(const AscendingIterator &other);

    AscendingIterator begin() const;
    AscendingIterator end() const;

    bool operator==(const AscendingIterator &other) const;

    bool operator!=(const AscendingIterator &other) const;

    bool operator>(const AscendingIterator &other) const;

    bool operator<(const AscendingIterator &other) const;

    int operator*() const;

    AscendingIterator &operator++();

};


#endif //MAGICAL_ITERATORS_A_MAGICALCONTAINER_H

