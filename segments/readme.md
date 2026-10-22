читаем утилитой readelf

-std=c++23 // из за std::print

realdelf -h ./app | less
realdelf -SW ./app | less
realdelf -sCW ./app | less
realdelf -x .rodata ./app | less // -x = hex