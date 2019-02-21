class A : public B {
    public:
        A(int c, int d);
        auto getC() const -> int;
    private:
        const int d;
};
