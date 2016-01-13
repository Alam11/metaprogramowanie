
template<int N> struct fibo {
    enum {val = fibo<N - 1>::val + fibo<N - 2>::val};
};

template<> struct fibo<0> {
    enum {val = 1};
};

template<> struct fibo<1> {
    enum {val = 1};
};
