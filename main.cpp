#include "vector.hpp"
#include "Map.hpp"
#include <vector>

int main()
{
    ft::Vector<int> a(2, 10);
    ft::Vector<int> b(2, 20);
    std::vector<int> aa(2, 10);
    std::vector<int> bb(2, 20);

    ft::Vector<int>::iterator it1;
    ft::Vector<int>::iterator it2;

    std::vector<int>::iterator itt1;
    std::vector<int>::iterator itt2;

    it1 = a.begin();
    it2 = b.begin();

    itt1 = aa.begin();
    itt2 = bb.begin();

    a.swap(b);
    bb.swap(aa);

    std::cout << "ft::vector: iterator for a" << std::endl;
    std::cout << *it1 << std::endl;
    std::cout << "ft::vector: a" << std::endl;
    std::cout << a[0] << std::endl;
    std::cout << "ft::vector: iterator for b" << std::endl;
    std::cout << *it2 << std::endl;
    std::cout << "ft::vector: b" << std::endl;
    std::cout << b[0] << std::endl;


    std::cout << "std::vector: iterator for aa" << std::endl;
    std::cout << *itt1 << std::endl;
    std::cout << "std::vector: aa" << std::endl;
    std::cout << aa[0] << std::endl;
    std::cout << "std::vector: iterator for bb" << std::endl;
    std::cout << *itt2 << std::endl;
    std::cout << "std::vector: bb" << std::endl;
    std::cout << bb[0] << std::endl;
}