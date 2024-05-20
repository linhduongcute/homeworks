SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* head = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* current = llist;
        head -> next = current;
    current = head;
    return current;
}
