doesn't work -->
```
vector<int> res;
while(num){
int temp = 0;
temp = num%10;
res.push_back(temp);
num = num/10;
}
for(int i = 0; i< res.size(); i++){
if(res[i] == 6){
res[i] = 9;
break;
}
else continue;
}
num= 0;
for(int i = 0; i< res.size(); i++){
num = num*10 + res[i];
}
return num;
```