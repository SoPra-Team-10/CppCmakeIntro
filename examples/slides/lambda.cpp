int c = 17;
auto mulFun = [&c](int i, int m) {
    c++;
    return i * m;
}
mulFun(17, 3);

auto doubleFun = 
    std::bind(mulFun, std::placeholder::_1, 2);
doubleFun(17);
