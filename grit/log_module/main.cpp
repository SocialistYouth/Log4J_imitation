/*
 * @Author: Cui XiaoJun
 * @Date: 2023-03-30 22:50:20
 * @LastEditTime: 2023-03-30 23:42:04
 * @email: cxj2856801855@gmail.com
 * @github: https://github.com/SocialistYouth/
 */
#include <iostream>
#include <memory>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    const int* p1 = &a;
    cout << "p1 before: " << p1 << endl;
    p1 = &b;
    cout << "p1 after: " << p1 << endl;
    int const *p2 = &a;
    cout << "p2 before: " << p2 << endl;
    p2 = &b;
    cout << "p2 after: " << p2 << endl;
    int* const p3 = &a;
    cout << "p3 before: " << p3 << endl;
    *p3 = b;
    cout << "p3 after: " << p3 << endl;
    const shared_ptr<int> p4 = (shared_ptr<int>)&a;
    shared_ptr<int> p5 = p4;
    cout << p4 << "   " << p5 << endl;
    p5 = (shared_ptr<int>)&b;
    cout << p4 << "   " << p5 << endl;



    return 0;
}