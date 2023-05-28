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
    MagicalContainer(); //default
    MagicalContainer(MagicalContainer &other); // copy
    ~MagicalContainer(); //destructor
    MagicalContainer &operator=(const MagicalContainer &other);

    void addElement(int element);

    void removeElement(int element);

    int size() const;

    friend class AscendingIterator;
    friend class SideCrossIterator;
    friend class PrimeIterator;
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

class SideCrossIterator {
private:
    const MagicalContainer &cont;
    int curr;

public:
    SideCrossIterator(const MagicalContainer &cont, int curr = 0);
    SideCrossIterator(const SideCrossIterator &other);

    SideCrossIterator begin() const;
    SideCrossIterator end() const;

    bool operator==(const SideCrossIterator &other) const;
    bool operator!=(const SideCrossIterator &other) const;
    bool operator>(const SideCrossIterator &other) const;
    bool operator<(const SideCrossIterator &other) const;
    int operator*() const;
    SideCrossIterator &operator++();
};

class PrimeIterator {
private:
    const MagicalContainer &cont;
    int curr;

public:
    PrimeIterator(const MagicalContainer &cont, int curr = 0);
    PrimeIterator(const PrimeIterator &other);

    PrimeIterator begin() const;
    PrimeIterator end() const;

    bool operator==(const PrimeIterator &other) const;
    bool operator!=(const PrimeIterator &other) const;
    bool operator>(const PrimeIterator &other) const;
    bool operator<(const PrimeIterator &other) const;
    int operator*() const;
    PrimeIterator &operator++();
};

#endif //MAGICAL_ITERATORS_A_MAGICALCONTAINER_H

