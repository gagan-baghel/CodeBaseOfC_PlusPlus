
class Solution
{
    public:
    Node * removeDuplicates( Node *&head){
     map<int,int>m;
     Node*prev=head;
     m[prev->data]=1;
     Node* curr=head->next;
     while(curr!=NULL){
         if(m[curr->data]){
             prev->next=curr->next;
             free(curr);}
         else{m[curr->data]=1;
             prev=curr;}
         curr=prev->next;}
     return head;}};
