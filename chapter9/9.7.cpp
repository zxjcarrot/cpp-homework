#include <iostream>

using namespace std;

class Stack {
public:
    Stack(int s):iSize(s), piBuffer(new int[s]), iTop(piBuffer){}

    ~Stack() {
        delete piBuffer;
        piBuffer = NULL;
    }

    int Pop() {
        if (iTop == piBuffer) {
            cout << "栈空！" << endl;
            return -1;
        }
        
        return *--iTop;
    }

    void Push(int v) {
        if (iTop == piBuffer + iSize) {
            cout << "栈满！" << endl; 
            return;
        }

        *iTop++ = v;
    }

    int Size() {
        return  iTop - piBuffer;
    }

private:
    int *piBuffer;
    int iSize;
    int *iTop;
};

int main () {
    Stack s(5);						//定义一个有5个元素的栈
    s.Push(1);
    s.Push(2);
    s.Push(3);
    cout << s.Size() << endl;			//输出结果：3
    int a;
    a = s.Pop();
    cout << a << endl;				//输出结果：3
    a = s.Pop();
    cout << a << endl;				//输出结果：2
    cout << s.Size() << endl;			//输出结果：1
    
}
