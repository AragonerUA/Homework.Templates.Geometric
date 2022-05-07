#include <iostream>
#include <iterator>
#include <vector>
#include "fun.h"

using namespace std;

void Print(bool temp) {
    if (temp)
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
}

int main() {
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    cout << "all_off:" << endl;
    int pred = 1;
    Print(all_off<vector<int>, int>(v1, pred));

    cout << endl;
    cout << "all_off with CPoint:" << endl;
    int y = 1;
    int x = 1;
    CPoint<int> predic(x, y);
    vector<CPoint<int>> Vc;
    for (int i = 0; i < 5; i++) {
        Vc.push_back(predic);
    }
    Print(all_off<vector<CPoint<int>>, CPoint<int>>(Vc, predic));
    cout << endl;

    cout << "is_partitioned:" << endl;
    Print(is_partitioned<vector<int>, int>(v1, pred));
    cout << endl;
    cout << "is_partitioned CPoint:" << endl;
    Print(is_partitioned<vector<CPoint<int>>, CPoint<int>>(Vc, predic));
    cout << endl;

//    cout << "find_backward:" << endl;
//    cout << "place: " << (find_backward<vector<int>, int>(v1, pred)) << endl;
//    cout << endl;
//    cout << "find_backward CPoint:" << endl;
//    vector<CPoint<int>> test;
//    for (int i = 0; i < 5; i++) {
//        test.push_back(CPoint<int>(i, i));
//    }
//    CPoint<int> test_pr(x, y);
//    cout << "place: " <<find_backward<vector<CPoint<int>>, CPoint<int>>(test, test_pr) << endl;
cout<<"HELLO\n";
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    auto it = find_backward(v.begin(), v.end(), 10);
    if (it != v.end()) {
        cout << *it;
    }
    return 0;
}
