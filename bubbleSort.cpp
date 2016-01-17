#include<algorithm>
#include<iostream>

template<int N>
inline void loop(int *data) {
    if (data[0] > data[1]) std::swap(data[0], data[1]);

    loop<N - 1>(++data);

}

template<>
inline void loop<0>(int *data) { };

template<int N>
inline void bubble_sort(int *data) {
    loop<N - 1>(data);
    bubble_sort<N - 1>(data);
}


template<>
inline void bubble_sort<2>(int *data) {
    loop<1>(data);
};

