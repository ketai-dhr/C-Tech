#include <iostream>

struct ListNode {
    int data;
    ListNode* prev;
    ListNode* next;
    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// 在节点 n0 之后插入新节点 nNew
void insertAfter(ListNode* n0, int newValue) {
    if (n0 == nullptr)
        return;

    ListNode* nNew = new ListNode(newValue);  // 创建新节点
    ListNode* nNext = n0->next;

    nNew->next = nNext;  // 新节点的 next 指向 n0 的下一个节点
    nNew->prev = n0;     // 新节点的 prev 指向 n0
    n0->next = nNew;     // n0 的 next 指向新节点

    if (nNext) {         // 如果 n0 不是最后一个节点
        nNext->prev = nNew;  // 更新下一个节点的 prev 指针
    }
}

// 删除节点 n0 之后的首个节点
void remove(ListNode* n0) {
    if (n0->next == nullptr)
        return;

    ListNode* P = n0->next;  // 找到要删除的节点
    ListNode* n1 = P->next;  // 找到 P 的下一个节点

    n0->next = n1;  // 更新 n0 的 next 指针，跳过 P
    if (n1) {
        n1->prev = n0;  // 更新 n1 的 prev 指针
    }

    delete P;  // 释放内存
}

// 正向打印链表
void printList(ListNode* head) {
    ListNode* current = head;
    while (current) {
        std::cout << current->data << " <-> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

// 反向打印链表
void printListReverse(ListNode* tail) {
    ListNode* current = tail;
    while (current) {
        std::cout << current->data << " <-> ";
        current = current->prev;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    // 创建一个简单的双向链表: 1 <-> 2 <-> 3
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    std::cout << "原链表: ";
    printList(head);

    // 在节点 2 之后插入节点 4
    insertAfter(second, 4);

    std::cout << "插入节点 4 之后: ";
    printList(head);

    // 删除节点 2 之后的首个节点（即节点 4）
    remove(second);

    std::cout << "删除节点 2 之后的首个节点后: ";
    printList(head);

    // 正向打印和反向打印链表
    std::cout << "反向打印链表: ";
    printListReverse(third);

    return 0;
}
