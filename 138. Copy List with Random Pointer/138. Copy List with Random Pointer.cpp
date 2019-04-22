/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node() {}

    Node(int _val, Node* _next, Node* _random) {
        val = _val;
        next = _next;
        random = _random;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        vector<Node*>v1,v2;
        
        Node* trav1 = head;
        Node* trav2 = head;
        unordered_map <Node*,Node*>m;
        int cnt=0;
        while(trav1)
        {
            Node* newnode = new Node();
            newnode->val = trav1->val;
            newnode->next=0;
            newnode->random=0;
            v1.push_back(trav1);
            v2.push_back(newnode);
            m[trav1]=newnode;
            trav1 = trav1->next;
        }
        
        for(int i=0;i<v1.size();i++)
        {
            if(i+1<v1.size())
                v2[i]->next =v2[i+1];
            v2[i]->random=m[v1[i]->random];
        }
        if(!v2.empty())
            return v2[0];
        else
            return {};
    }
};
