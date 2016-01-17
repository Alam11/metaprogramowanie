#include <iostream>
#include <limits>

template<unsigned long B, unsigned long E>
struct Pow {
    static const unsigned long result = B * Pow<B, E - 1>::result;
};

template<unsigned long B>
struct Pow<B, 0> {
    static const unsigned long result = 1;
};


template<unsigned long N>
struct pi {
    static constexpr double val =
            (
                    1.0 / Pow<16, N>::result *
                    (
                            4.0 / (8 * N + 1.0) - 2.0 / (8 * N + 4.0) -
                            1.0 / (8 * N + 5.0) - 1.0 / (8 * N + 6.0)
                    )
            ) + pi<N - 1>::val;
};

template<>
struct pi<-1> {
    static constexpr double val = 0;
};