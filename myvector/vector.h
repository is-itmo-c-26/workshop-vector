#include <cstddef>
#include <cstdlib>
#include <utility>

namespace my_lib {

struct myvector {
    myvector() = default;
    ~myvector() {
        hard_clear();
    }
    using value_type = int;
    using pointer = value_type*;

    // modify elems
    // добавить в конец
    void push_back(value_type);
    // удалить с конца
    void pop_back();


    // modify size/capacity
    // изменить size
    void resize(size_t new_size);
    // зарезервировать capacity
    void reserve(size_t new_size);
    void shrink_to_fit();
    void clear();
    void hard_clear();


    // access
    size_t size();
    size_t capacity();

    pointer data();

    // у reference std::vector::operator[]()
    value_type operator[](size_t index);
    value_type at(size_t index);


    // field
    size_t m_size = 0;
    size_t m_capacity = 0;
    pointer m_data = nullptr;

};

} // namespace my_lib