#include "vector.h"

#include <algorithm>

namespace my_lib {

void myvector::push_back(value_type value) {
    if (m_size == m_capacity) {
        reserve(m_capacity * 2);
    }

    m_data[m_size++] = value;
}

void myvector::pop_back() {
    m_size--;
}


void myvector::resize(size_t new_size) {
    if (new_size == m_size) {
        return;
    }

    m_capacity = new_size;
    pointer new_data = new value_type[m_capacity]{};

    m_size = std::min(m_size, m_capacity);
    for (size_t ind = 0; ind < m_size; ++ind) {
        new_data[ind] = m_data[ind];
    }
    m_size = new_size;
    if (m_data != nullptr) {
        delete[] m_data;
    }
    std::swap(m_data, new_data);
    

}

void myvector::reserve(size_t reserve_capacity) {
    if (m_capacity >= reserve_capacity) {
        return;
    }

    m_capacity = reserve_capacity;
    pointer new_data = new value_type[m_capacity]{};

    for (size_t ind = 0; ind < m_size; ++ind) {
        new_data[ind] = m_data[ind];
    }
    // std::memcpy(new_data, data, sizeof(value_type) * size);

    if (m_data != nullptr) {
        delete[] m_data;
    }

    std::swap(m_data, new_data);
}

void myvector::shrink_to_fit() {
    if (m_size == m_capacity) {
        return;
    }

    m_capacity = m_size;
    pointer new_data = new value_type[m_capacity]{};

    for (size_t ind = 0; ind < m_size; ++ind) {
        new_data[ind] = m_data[ind];
    }

    if (m_data != nullptr) {
        delete[] m_data;
    }

    std::swap(m_data, new_data);
}

void myvector::clear() {
    m_size = 0;
}

void myvector::hard_clear() {
    m_size = 0;
    m_capacity = 0;
    if (m_data != nullptr) {
        delete[] m_data;
    }
    // m_data = nullptr;
}


size_t myvector::size() { return m_size; }
size_t myvector::capacity() { return m_capacity; }
myvector::pointer myvector::data() {return m_data; }

myvector::value_type myvector::operator[](size_t index) {
    return m_data[index];
}
myvector::value_type myvector::at(size_t index) {
    if (m_size < index + 1) {
        exit(-1);
        // throw std::out_of_range("size = " + std::to_string(size));
    }

    return m_data[index];
}

} // namespace my_lib
