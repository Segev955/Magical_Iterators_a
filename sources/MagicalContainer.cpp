//
// Created by Segev on 24/05/2023.
//

#include "MagicalContainer.h"

//MagicalContainer::MagicalContainer() : dArray()
//
//=
//
//vector<int>() {}
//
//MagicalContainer::MagicalContainer(MagicalContainer &other) {
//    dArray = other.dArray;
//}
//
//MagicalContainer::~MagicalContainer() {}

//MagicalContainer &MagicalContainer::operator=(const MagicalContainer &other) {
//    if (this == &other) {
//        return *this;
//    }
//    dArray = other.dArray; //copy
//    return *this;
//}

void MagicalContainer::addElement(int element) {
    dArray.push_back(element);
}

void MagicalContainer::removeElement(int element) {
    dArray.erase(remove(dArray.begin(), dArray.end(), element), dArray.end());
}

int MagicalContainer::size() const {
    return dArray.size();
}

//AscendingIterator MagicalContainer::ascendingBegin() const {
//    return AscendingIterator(*this, 0);
//}
//
//AscendingIterator MagicalContainer::ascendingEnd() const {
//    return AscendingIterator(*this, dArray.size());
//}

//AscendingIterator

AscendingIterator::AscendingIterator(const MagicalContainer &cont, int curr)
        : cont(cont), curr(curr) {}

AscendingIterator::AscendingIterator(const AscendingIterator &other)
        : cont(other.cont), curr(other.curr) {}

//AscendingIterator &AscendingIterator::operator=(const AscendingIterator &other) {
//    if (this != &other) {
//        cont = other.cont;
//        curr = other.curr;
//    }
//    return *this;
//}

AscendingIterator AscendingIterator::begin() const {
    return AscendingIterator(cont, 0);
}

AscendingIterator AscendingIterator::end() const {
    return AscendingIterator(cont, cont.size());
}


bool AscendingIterator::operator==(const AscendingIterator &other) const {
    return &cont == &other.cont;
}

bool AscendingIterator::operator!=(const AscendingIterator &other) const {
    return !(*this == other);
}

bool AscendingIterator::operator>(const AscendingIterator &other) const {
    return curr > other.curr;
}

bool AscendingIterator::operator<(const AscendingIterator &other) const {
    return curr < other.curr;
}

int AscendingIterator::operator*() const {
    return cont.dArray[(std::vector<int>::size_type)curr];
}

AscendingIterator &AscendingIterator::operator++() {
    ++curr;
    return *this;
}
