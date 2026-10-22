#include <print>

int g_initialized = 10;
const int g_const_initialized = 10;
const int g_uninitialized = 6;
const int g_zero_initialized = 0;
const char* g_const_messgae = "hello world 2";
char g_readonly_message[] = "hello world";

void myprint_all() {
    std::println(
        " g_initialized: {}, g_const_initialized: {}, g_uninitialized: {}, g_zero_initialized: {}, g_const_messgae: {}, g_readonly_message: {}",
        g_initialized,
        g_const_initialized,
        g_uninitialized,
        g_zero_initialized,
        g_const_messgae,
        g_readonly_message
    );
}

int main() {
    // int l_initialized = 90;
    // static int g_m_initialized = 10;

    // myprint_all();

    // std::println("l_initialized: {}, g_m_initialized: {}",
    // l_initialized, g_m_initialized);

    for (int i = 0; i < 20; ++i) {
        std::println("{}", g_const_messgae[i]);
    }

    return 0;
}
