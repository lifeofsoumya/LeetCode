Converting to vector solution
​
```
ListNode* temp = head;
vector<int> v;  // to store all the linked list values in vector
while(temp!=NULL){
v.push_back(temp->val);
temp = temp->next; // converting ll to vector
}
int sum = INT_MIN;
for(int i = 0 ; i<v.size(); i++){
sum = max(sum, v[i]+v[v.size()-1-i]);
}
return sum;
```