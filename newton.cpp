template<int N, int K>
struct newton {
    static constexpr int val = newton<N - 1, K - 1>::val + newton<N - 1, K>::val;
};

template<int K>
struct newton<0,K> {
    static constexpr int val = 1;
};

template<int K>
struct newton<K, 0> {
    static constexpr int val = 1;
};

template<int K>
struct newton<K, K> {
    static constexpr int val = 1;
};

template<>
struct newton<0, 0> {
    static constexpr int val = 1;
};