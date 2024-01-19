#include <bits/stdc++.h>
using namespace std;

class TwoStack
{
    int *arr;
    int top1;
    int top2;
    int size;

public:
    // Initialize TwoStack.
    TwoStack(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // Push in stack 1.
    void push1(int num)
    {
        // atleast a empty space present
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    int peek1()
    {
        if (top1 >= 0)
        {
            return arr[top1];
        }
        else
            return -1;
    }

    int peek2()
    {
        if (top2 < size)
        {
            return arr[top2];
        }
        else
            return -1;
    }

    bool isEmpty1()
    {
        return (top1 == -1);
    }

    bool isEmpty2()
    {
        return (top2 == size);
    }

    void display()
    {
        if (top1 == -1 && top2 == size)
        {
            cout << "Both Stacks are empty" << endl;
            return;
        }

        cout << "Stack 1 elements: ";
        for (int i = 0; i <= top1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Stack 2 elements: ";
        for (int i = size - 1; i >= top2; i--)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    TwoStack ts(5);

    ts.push1(1);
    ts.push1(2);
    ts.push1(3);

    ts.push2(4);
    ts.push2(5);

    ts.display();

    cout << "Peek Stack 1: " << ts.peek1() << endl;
    cout << "Peek Stack 2: " << ts.peek2() << endl;

    ts.pop1();
    ts.pop2();

    ts.display();

    cout << "Is Stack 1 empty? " << ts.isEmpty1() << endl;
    cout << "Is Stack 2 empty? " << ts.isEmpty2() << endl;

    return 0;
}