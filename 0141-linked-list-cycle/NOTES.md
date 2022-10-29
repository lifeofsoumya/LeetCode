opt 1;
​
class Solution {
public:
unordered_map<ListNode*, int> mp;
bool hasCycle(ListNode *head) {
if(!head || !head->next) return false;
while(head!=NULL){
if(mp.find(head) == mp.end()){ // if head not found, it returns end
mp[head]++;
}
else return true;
head=head->next;
}
return false;
}
};
​
opt 2;
​
class Solution {
public:
bool hasCycle(ListNode *head) {
if(head==NULL){
return false;
}
while(head){
if(head->val==1000000){
return true;
}
head->val=1000000;
head=head->next;
}
return false;
}
};