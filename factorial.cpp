template<int N>
struct factorial {
    enum {
        val = factorial<N - 1>::val * N
    };
};


template<>
struct factorial<0> {
    enum {
        val = 1
    };
};

template<>
struct factorial<1> {
    enum {
        val = 1
    };
};
