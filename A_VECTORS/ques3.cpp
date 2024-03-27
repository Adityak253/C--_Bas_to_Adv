#include<iostream>

using namespace std;
struct ListNode
{
    public:
    int val;
    ListNode *node;
    
    ListNode()
    {
        val=0;
        node=nullptr;
    }
    ListNode(int x)
    {
        val=x;
        node=nullptr;
    }
    ListNode(int x,ListNode * address)
    {
        val=x;
        node=address;
    }
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode * l3 {};
        ListNode * current {};
        int rem =0;
        while(l1 !=nullptr || l2 !=nullptr)
        {
            int x = l1 !=nullptr ? l1->val : 0;
            int y = l2 !=nullptr ? l2->val : 0;
            int sum = x + y + rem;
            rem=sum/10;
            if(l3==nullptr)
            {
                l3= new ListNode(sum % 10);
                current=l3;
            }
            else
            {
                current->val=sum % 10;
            }
            if(l1!=nullptr)
            l1=l1->node;
            if(l2!=nullptr)
            l2=l2->node;

            if(l1!=nullptr || l2 !=nullptr || rem >0)
            {
                current->node=new ListNode();
                current=current->node;
            }
        }
        return l3;
    }
};
void Display(ListNode *l1)
{
    while(l1!=nullptr)
    {
        cout<<l1->val<<" ";
        l1=l1->node;
    }
}
int main() {
    int n1 = 999999;
    int n2 = 9999;
    Solution s1;
    ListNode *l1 = nullptr, *l2 = nullptr, *tail1 = nullptr, *tail2 = nullptr;

    while (n1 > 0) {
        int push = n1 % 10;
        if (l1 == nullptr) {
            l1 = new ListNode(push);
            tail1 = l1;
        } else {
            tail1->node = new ListNode(push);
            tail1 = tail1->node;
        }
        n1 = n1 / 10;
    }

    while (n2 > 0) {
        int push = n2 % 10;
        if (l2 == nullptr) {
            l2 = new ListNode(push);
            tail2 = l2;
        } else {
            tail2->node = new ListNode(push);
            tail2 = tail2->node;
        }
        n2 = n2 / 10;
    }

    ListNode *l3 = s1.addTwoNumbers(l1, l2);
    Display(l1);
    cout << endl;
    Display(l2);
    cout << endl;
    Display(l3);
    cout << endl;

    delete l1;
    delete l2;
    delete l3;

    return 0;
}