/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        Node* newHead = new Node(head->val);
        unordered_map<Node*, Node*> m;

        m[head]=newHead;

        Node* newtemp = newHead;
        Node* oldtemp = head->next;

        while(oldtemp!=NULL){
            Node* copyNode = new Node(oldtemp->val);
            m[oldtemp]=copyNode;

            newtemp->next = copyNode;
            oldtemp=oldtemp->next;
            newtemp=newtemp->next;


        }
         newtemp = newHead;
         oldtemp = head;
         while(oldtemp!=NULL){
            if(oldtemp->random!=NULL){
                 newtemp->random=m[oldtemp->random];

                 
            }
            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
         }
         return newHead;
    }
};