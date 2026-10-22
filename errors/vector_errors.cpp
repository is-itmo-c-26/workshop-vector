#include <vector>
#include <list>
#include <print>

int main(int, char**) {
#if 1
{
    std::list<int> cont = {1, 2, 3, 4, 5};

    for (auto it = cont.begin(); it != cont.end(); ++it) {
        if (*it % 2) {
            auto tmpitr = it;
            it++;
            cont.erase(tmpitr);
        }
    }

    for (auto v : cont) {
        std::print("{} ", v);
    }
    std::println("");

}
#endif

#if 1
{
    std::list<int> cont = {1, 2, 3, 4, 5};

    for (auto it = cont.begin(); it != cont.end(); ++it) {
        if (*it % 2) {
            cont.push_back(*it * 2);
        }
    }

    for (auto v : cont) {
        std::print("{} ", v);
    }
    std::println("");
}
#endif

#if 0
{
    std::vector cont = {1, 2, 3, 4, 5};
    std::vector cont2 = cont;

    for (auto it = cont.begin(); it != cont2.end(); ++it) {
        std::print("{}", *it);
    }
}
#endif


    return 0;
}