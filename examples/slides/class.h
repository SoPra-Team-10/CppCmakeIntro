class A : public B {
    public:
        A(int c, int d);
        auto getC() const -> int;
    private:
        int d;
};
