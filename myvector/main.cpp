// g++ -std=c++23 -O0 ./main.cpp vector.cpp -o myvec

#include <print>

#include "vector.h"

void print_vect(my_lib::myvector* vect) {
    my_lib::myvector& v = *vect;
    std::println("size: {}", v.size());
    std::println("capacity: {}", v.capacity());

    for (int i = 0; i < v.size(); ++i) {
        std::print("{} ", v[i]);
    }

    std::println("");
    std::println("");
}

int main() {
    my_lib::myvector vec; // 0 alloc
    print_vect(&vec);

    vec.reserve(5);
    print_vect(&vec);

    for (int i = 0; i < 5; ++i) { // 1 alloc
        vec.push_back(i*2);
        print_vect(&vec);
    }



    vec.pop_back();
    print_vect(&vec);

    vec.shrink_to_fit();
    print_vect(&vec);

    vec.resize(100); // 1 alloc
    print_vect(&vec);

    vec.resize(1);
    print_vect(&vec);

    vec.clear();
    print_vect(&vec);

    vec.hard_clear();
    print_vect(&vec);

}