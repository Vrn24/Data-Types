/*22070123129*/
/*Varun Pagote*/
/*Experiment 3a*/

#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
};
class linked_list{
    struct node *head;
    public:
    add_start(){
        struct node *newnode;
        int x;
       newnode=(struct node *)malloc(sizeof(struct node));
       cout<<"Enter data for new node: ";
       cin>>x;
       newnode->data = x;
       newnode->next = NULL;
       newnode->next = head;
       head = newnode;
    }
    del_start(){
    }
    add_end(){
        struct node *newnode;
        public:
        add_start(){
            struct node *newnode,*temp;
            int x;
            if(head==NULL)
            {
                add_start();
                return;
            }
            newnode=(struct node *)malloc(sizeof(struct node));
            cout<<"Enter data for new node: ";
            cin>>x;
            newnode->data = x;
            newnode->next = NULL;
            while(tem->next!=NULL)
                temp=temp->next;
            temp->next=newnode;
        }
    }
    del_end(){
    }
    disp_ll()
    {
        struct node *temp;
        temp = head;
        while(temp!=NULL) {
            cout<<temp->data<<"->"<<endl;
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
main()
{
    linked_list myList;
    while(1){
    char choice;
    cout<<"Add node_bg: 1"<<endl;
    cout<<"Del node_bg: 2"<<endl;
    cout<<"Add node_end: 3"<<endl;
    cout<<"Del node_end: 4"<<endl;
    cout<<"Display node: 5"<<endl;
    cout<<"Exit: 6"<<endl;
    cin>>choice;
    switch(choice) {
        case '1':
        myList.add_start();
        break;

        case '2':
        break;

        case '3':
        break;

        case '4':
        break;

        case '5':
        myList.disp_ll();
        break;

        case '6':
        exit;

        default:
        exit;
        break;
    }
    }
    return 0;
}