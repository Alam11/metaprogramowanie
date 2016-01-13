#include<algorithm>
#include<iostream>

void inline bubble_sort_function (int* data, int N) {
    for(int i = N-1; i>0; --i)
        for(int j=0;j<i;++j)
            if(data[j]>data[j+1])
                std::swap(data[j],data[j+1]);

}


template<int N> inline void loop(int *data) {
    if(data[0]>data[1]) std::swap(data[0],data[1]);

    loop<N-1>(++data);

}

template<> inline void loop<0>(int *data) {};

template<int N>  inline void bubble_sort(int *data) {
    loop<N-1>(data);

    bubble_sort<N - 1>(data);

}



template<>  inline void bubble_sort<2>(int *data) {
    loop<1>(data);
};

