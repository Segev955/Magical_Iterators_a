//
// Created by Segev on 24/05/2023.
//

#include "MagicalContainer.h"

MagicalContainer::MagicalContainer() {
}

MagicalContainer::MagicalContainer(MagicalContainer &other) {
    dArray = other.dArray;
}

MagicalContainer::~MagicalContainer() {}

MagicalContainer &MagicalContainer::operator=(const MagicalContainer &other) {
    if (this == &other) {
        return *this;
    }
    dArray = other.dArray; //copy
    return *this;
}

void MagicalContainer::addElement(int element) {
    dArray.push_back(element);
}

void MagicalContainer::removeElement(int element) {
    auto x = std::find(dArray.begin(), dArray.end(), element);
    if (x != dArray.end()) {
        dArray.erase(x);
    }
    else {
        throw std::invalid_argument("Element not found");
    }
}

int MagicalContainer::size() const {
    return dArray.size();
}

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
    return curr == other.curr;
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
    return cont.dArray[(std::vector<int>::size_type) curr];
}

AscendingIterator &AscendingIterator::operator++() {
    ++curr;
    return *this;
}


//SideCrossIterator

SideCrossIterator::SideCrossIterator(const MagicalContainer &cont, int curr)
        : cont(cont), curr(curr) {}

SideCrossIterator::SideCrossIterator(const SideCrossIterator &other)
        : cont(other.cont), curr(other.curr) {}


SideCrossIterator SideCrossIterator::begin() const {
    return SideCrossIterator(cont, 0);
}

SideCrossIterator SideCrossIterator::end() const {
    return SideCrossIterator(cont, cont.size());
}


bool SideCrossIterator::operator==(const SideCrossIterator &other) const {
    return curr == other.curr;
}

bool SideCrossIterator::operator!=(const SideCrossIterator &other) const {
    return !(*this == other);
}

bool SideCrossIterator::operator>(const SideCrossIterator &other) const {
    return curr > other.curr;
}

bool SideCrossIterator::operator<(const SideCrossIterator &other) const {
    return curr < other.curr;
}

int SideCrossIterator::operator*() const {
    return cont.dArray[(std::vector<int>::size_type) curr];
}

SideCrossIterator &SideCrossIterator::operator++() {
    ++curr;
    return *this;
}



//PrimeIterator

PrimeIterator::PrimeIterator(const MagicalContainer &cont, int curr)
        : cont(cont), curr(curr) {}

PrimeIterator::PrimeIterator(const PrimeIterator &other)
        : cont(other.cont), curr(other.curr) {}


PrimeIterator PrimeIterator::begin() const {
    return PrimeIterator(cont, 0);
}

PrimeIterator PrimeIterator::end() const {
    return PrimeIterator(cont, cont.size());
}


bool PrimeIterator::operator==(const PrimeIterator &other) const {
    return curr == other.curr;
}

bool PrimeIterator::operator!=(const PrimeIterator &other) const {
    return !(*this == other);
}

bool PrimeIterator::operator>(const PrimeIterator &other) const {
    return curr > other.curr;
}

bool PrimeIterator::operator<(const PrimeIterator &other) const {
    return curr < other.curr;
}

int PrimeIterator::operator*() const {
    return cont.dArray[(std::vector<int>::size_type) curr];
}

PrimeIterator &PrimeIterator::operator++() {
    ++curr;
    return *this;
}
