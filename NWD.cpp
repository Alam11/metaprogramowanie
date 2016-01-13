template<int A, int B>
struct euklides{
    static const unsigned long val = euklides<B, A%B>::val;
};

template<int A>
struct euklides<A,0>{
    static const unsigned long val = A;
};




