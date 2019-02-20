A::A(int c) : B{c}, d{d} {
    // More code
}

auto A::getC() const -> int {
    return this->c;
}
