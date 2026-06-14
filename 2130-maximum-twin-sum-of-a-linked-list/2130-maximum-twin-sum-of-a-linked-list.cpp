/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* p=0;
        ListNode* c=head;
        ListNode* n=head;
        while(c){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
    int pairSum(ListNode* head) {
        ListNode* temp =head;
        int sum = 0,c=0;
        while(temp->next){
            temp = temp->next;
            c++;
        }
        temp =head;
        for(int i=1;i<=c/2;i++){
            temp=temp->next;
        }
        ListNode* r = reverse(temp);
        while(r->next){
            int s = head->val+r->val;
            sum = max(s,sum);
            head=head->next;
            r = r->next;
        }
        return sum;
    }
};