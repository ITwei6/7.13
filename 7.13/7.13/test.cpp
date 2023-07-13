// resizing vector
#include <iostream>
#include <vector>
//
//int main()
//{
//    std::vector<int> myvector;
//
//    // set some initial content:
//    for (int i = 1; i < 10; i++) myvector.push_back(i);
//
//    myvector.resize(5);
//    myvector.resize(8, 100);
//    myvector.resize(12);
//    //默认是用0初始化
//
//    std::cout << "myvector contains:";
//    for (int i = 0; i < myvector.size(); i++)
//        std::cout << ' ' << myvector[i];
//    std::cout << '\n';
//
//    return 0;
//}
// inserting into a vector
//#include <iostream>
//#include <vector>
//
//int main()
//{
//    std::vector<int> myvector(3, 100);
//    std::vector<int>::iterator it;
//    //100  100  100
//    for (auto e : myvector)
//    {
//        std::cout << e;
//    }
//    std::cout << '\n';
//    it = myvector.begin();
//    it = myvector.insert(it, 200);
//    //200 100 100 100
//    for (auto e : myvector)
//    {
//        std::cout << e ;
//    }
//    std::cout << '\n';
//    myvector.insert(it, 2, 300);
//    // 300 300 200 100 100 100
//    for (auto e : myvector)
//    {
//        std::cout << e ;
//    }
//    std::cout << '\n';
//    // "it" no longer valid, get a new one://迭代器失效
//    it = myvector.begin();
//
//    std::vector<int> anothervector(2, 400);
//    //400 400
//    myvector.insert(it + 2, anothervector.begin(), anothervector.end());
//    //200 300 400 400 300 100 100 100
//    for (auto e : myvector)
//    {
//        std::cout << e;
//    }
//    std::cout << '\n';
//    int myarray[] = { 501,502,503 };
//    myvector.insert(myvector.begin(), myarray, myarray + 3);
//    //501 502 503 200 300 400 400 300 100 100 100
//    std::cout << "myvector contains:";
//    for (it = myvector.begin(); it < myvector.end(); it++)
//        std::cout << ' ' << *it;
//    std::cout << '\n';
//
//    return 0;
//}
// erasing from vector
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myvector;

    // set some values (from 1 to 10)
    for (int i = 1; i <= 10; i++) myvector.push_back(i);

    // erase the 6th element
    myvector.erase(myvector.begin() + 5);

    // erase the first 3 elements:
    myvector.erase(myvector.begin(), myvector.begin() + 3);

    std::cout << "myvector contains:";
    for (unsigned i = 0; i < myvector.size(); ++i)
        std::cout << ' ' << myvector[i];
    std::cout << '\n';

    return 0;
}