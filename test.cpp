/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年05月27日 星期三 19时01分12秒
 ************************************************************************/

#include<iostream>
using namespace std;

class  A
{
public:
    static void test(void)
    {
        cout<<"********test*********"<<endl;
    }
};
int main (void)
{
    A::test();
    return 0;
}
