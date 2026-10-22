#include <print>
#include <vector>

#if 0
// stack-use-after-free
const int* get_const_ptr() {
    const int value = 9099;
    return &value;

}
#endif


int main() {
     
#if 0
// heap-use-after-free // поюзали посли удаления
    {
        int* a = new int{};
        *a = 5;
        delete a;
        std::print("", *a);
    }
#endif


#if 0
// stack-use-after-free
    {
        std::print("{}", *get_const_ptr());
    }
#endif

#if 0
// out-of-range // корраптим чужую память
    {
        // bad practices
        // if (size <= index) {
        //     std::cerr << "OUTOFRANGE!!!"
        //     abort();
        // }

        // best practices
        // assert(size > index)

        int* arr = new int[10];

        int d = arr[10];
        delete [] arr;
    }
#endif

#if 0
// double-free // освободили более одного раза
    {
        int* a = new int{9};
        delete a;
        delete a;

        // void delete(void* ptr) {
        //    a.~T(); destructor!!!!
        //    size_t size = ___get_size_(a); {{ a -> offset -> read some cool bytes }}
        //    free(a, size);
        // }
    }
#endif

#if 1
// memory-leaked // не освободили память
    {
        int* a = new int{52};
    }
#endif

#if 1
// ub // new[] / delete
    {
        int* a = new int[53]{};
        delete a;
    }
#endif


}