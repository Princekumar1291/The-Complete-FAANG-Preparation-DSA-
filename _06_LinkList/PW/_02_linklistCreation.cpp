// #include<bits/stdc++.h>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* next;
// };
// int main(){
//     //10 20 30 40
//     // Node a;
//     // a.val=10;
//     // Node b;
//     // b.val=20;
//     // Node c;
//     // c.val=30;
//     // Node d;
//     // d.val=40;

//     //forming linklist
//     // a.next=&b;
//     // b.next=&c;
//     // c.next=&d;
//     // d.next=NULL;
//     return 0;
// }
















// #include<bits/stdc++.h>
// using namespace std;
// class Node{  //linklist ka node
// public:
//     int val;
//     Node* next;
//     Node(int val){  //constructor
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main(){
//     //10 20 30 40
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     Node d(40);
    
//     //forming linklist
//     a.next=&b;
//     b.next=&c;
//     c.next=&d;

//     // cout<<(*(a.next)).val<<endl; //OR
//     // cout<<a.next->val<<endl;      

//     //Modifying data
//     // a.next->val=80;
//     // cout<<a.next->val<<endl;

//     //accessing c,d by a.

//     //(((a.next)->)->next).val;
//     // cout<<((a.next)->next)->val<<endl;
//     // cout<<(((a.next)->next)->next)->val;
//     return 0;
// }













// #include<bits/stdc++.h>
// using namespace std;
// class Node{  //linklist ka node
// public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main(){
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);

//     a->next=b;
//     b->next=c;
//     c->next=d;

//     Node* temp=a;
//     while (temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
    
//     // cout<<endl;
//     // cout<<a->next->next->next->val<<endl;
//     return 0;
// }


















// #include<bits/stdc++.h>
// using namespace std;
// class Node{  //linklist ka node
// public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);

//     a->next=b;
//     b->next=c;
//     c->next=d;

//     display(a);
//     return 0;
// }













// //  No of terms in linklist(size of linklist)
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
// public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// int size(Node* head){
//     Node* temp=head;
//     int c=0;
//     while(temp!=NULL){
//         c++;
//         temp=temp->next;
//     }
//     return c;
// }

// void recursiveDisplay(Node* head){
//     if(head==NULL) return ;
//     cout<<head->val<<" ";
//     recursiveDisplay(head->next);
// }

// void revDisplay(Node* head){
//     if(head==NULL) return ;
//     revDisplay(head->next);
//     cout<<head->val<<" ";
// }

// int main(){
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);

//     a->next=b;
//     b->next=c;
//     c->next=d;

//     cout<<size(a)<<endl;
//     recursiveDisplay(a);
//     cout<<endl;
//     revDisplay(a);
//     return 0;
// }












// LL class 
#include<bits/stdc++.h>
using namespace std;
class Node{   //Link list node
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{   //user defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head=tail=NULL;
        size=0;
    }

    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void insertAtIndx(int indx,int val){
        if(indx<0 || indx>size) cout<<"Invalid index."<<endl;
        else if(indx==0) insertAtHead(val);
        else if(indx==size) insertAtTail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=indx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }

    int getStIndex(int ind){
        if(ind<0 || ind>=size){
            cout<<"invalid input.";
            return -1;
        }
        Node* temp=head;
        for(int i=0;i<ind;i++){
            temp=temp->next;
        }
        return temp->val;
    }

    void deleteAtHead(){
        if(size==0) cout<<"Linklist is empty.";
        else if(size==1){
            head=tail=NULL;
            size--;
        } 
        else{
            head=head->next;
            size--;
        }

    }

    void deleteAtTail(){
        if(size==0){
            cout<<"Enpty linklist.";
            return ;
        }
        Node* temp=head;
        for(int i=2;i<=size-1;i++){
            temp=temp->next;
        }
        size--;
        tail=temp;
        temp->next=NULL;
    }

    void deleteAtIndx(int indx){
        if(indx<0 || indx>=size){
            cout<<"Invalid input.";
        }
        else if(indx==0) deleteAtHead();
        else if(indx==size-1) deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=indx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            // temp->next=NULL;  rong
            size--;
        }
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    int eleAtMidIndex(){
        Node* slow=head;
        Node* fast=head;
        if(size==1) return head->val;
        else{
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
            }
        }
        return slow->val;
    }

};
int main(){
    LinkedList ll;
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(35);
    ll.display();
    cout<<ll.size<<endl<<endl;

    ll.insertAtHead(5);
    ll.display();
    cout<<endl;

    ll.insertAtIndx(2,20);
    ll.display();
    
    cout<<ll.getStIndex(3)<<endl;

    // ll.deleteAtHead();
    // ll.display();

    // ll.deleteAtTail();
    // ll.display();

    // ll.deleteAtIndx(1);
    // ll.display();

    cout<<ll.eleAtMidIndex();
    return 0;
}

