class Solution {
public:
    struct node{
        char data;
        node*prev;
        node*next;
        node(char c){
            data=c;
            next=nullptr;
            prev=nullptr;
        }
    };
    int minTimeToType(string word) {
        node*head=new node('a');
        node*tail=head;
        int res=0;
        for(char c='b';c<='z';c++){
            node*newnode=new node(c);
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        tail->next=head;
        head->prev=tail;

            node*curr=head;
        for(int i=0;i<word.size();i++){
            int age=0;
            int peeche=0;
            node*temp=curr;
            while(temp->data!=word[i]){
                temp=temp->next;
                age++;
            }
            node*target=temp; 
            temp=curr;
            while(temp->data!=word[i]){
                temp=temp->prev;
                peeche++;
            }
            res+=min(age,peeche);
            curr=target;
        }
        return res+word.size();
    }
};