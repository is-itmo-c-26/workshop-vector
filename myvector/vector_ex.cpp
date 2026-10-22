#include <vector>
// #include <deque>
#include <print>

void print_vect(std::vector<int>* vect) {
    std::vector<int>& v = *vect;
    std::println("size: {}", v.size());
    std::println("capacity: {}", v.capacity());

    for (int value : v) {
        std::print("{} ", value);
    }

    std::println("");
    std::println("");
}

int main() {
    // {
    //     std::vector<int> cont(3);
    //     print_vect(&cont);
    // }
    // {
    //     std::vector<int> cont(3, 5);
    //     print_vect(&cont);
    // }
    // {
    //     std::vector<int> cont = {1, 2, 3};
    //     print_vect(&cont);
    // }
    // {
    //     std::vector<int> cont = std::vector<int>{6, 4, 7};
    //     print_vect(&cont);
    // }
    {
        std::vector<int> cont(200, 1);
        print_vect(&cont);

        cont.push_back(4);
        // cont.push_front(4);
        print_vect(&cont);
        cont.push_back(4);
        // cont.push_front(4);
        print_vect(&cont);
        cont.push_back(4);
        // cont.push_front(4);
        print_vect(&cont);

        cont.pop_back();
        // cont.pop_front();
        print_vect(&cont);

        cont[2] = 5;
        print_vect(&cont);

        cont.resize(10);
        print_vect(&cont);

        cont.reserve(15);
        print_vect(&cont);

        cont.shrink_to_fit();
        print_vect(&cont);

        cont.clear();
        print_vect(&cont);
    }

}

