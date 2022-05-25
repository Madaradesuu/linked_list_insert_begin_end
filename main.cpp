#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insert(int x,Node*& head){
    Node* temp = new Node();
    Node* temp1 = new Node();
    temp1->next =head;
    temp->data = x;
    temp->next = NULL;
    if (head ==NULL){
        head = temp;
    }
    while(temp1->next != NULL) {
        temp1 = temp1->next;
    }
    if (temp1->next == NULL)
        temp1->next = temp;
}
//void insert(int x,Node*& head){
////    Node* temp = new Node();
//    Node* temp1 = new Node();
//    temp1->next =head;
//    temp1->data = x;
////    temp1->next = NULL;
//
//        head = temp1;
//}
void printAll(Node* head){
    Node* temp1 =head;
//    temp1->next = head;
    while(temp1 != NULL) {
        cout << temp1->data<<" ";
        temp1 = temp1->next;
    }

}
int main() {
    Node* head = NULL;
//    Node* list = new Node();
//    head = list;
    cout << "insert number of element : ";
    int n,x;
    cin >> n;
    for (int i = 0;i<n;i++){
        cout << "insert an element : ";
        cin >> x;
        insert(x,head);
        printAll(head);
    }
    return 0;
}
