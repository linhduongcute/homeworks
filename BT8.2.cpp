SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    if (head == nullptr) {
        return newNode; // Nếu danh sách rỗng, trả về nút mới làm nút đầu tiên
    }

    SinglyLinkedListNode* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode; // Chèn nút mới vào cuối danh sách
    return head;
}
