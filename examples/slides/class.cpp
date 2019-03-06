A::A(int c, int d) : B{c}, d{d} {
    // More code
}

auto A::getC() const -> int {
    return this->c;
}
