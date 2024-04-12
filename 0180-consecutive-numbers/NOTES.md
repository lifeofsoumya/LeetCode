```
SELECT
distinct a.num as ConsecutiveNums
FROM
LOGS a
INNER JOIN Logs b
on a.id=b.id+1
INNER join Logs C
on b.id=c.id+1
WHERE a.num=b.num AND a.num=c.num;
easiest to understand but the worst option for runtime
```
​
```
select distinct Num as ConsecutiveNums
from Logs
where (Id + 1, Num) in (select * from Logs) and (Id + 2, Num) in (select * from Logs)
```
​
```
WITH cte AS (
SELECT num,
lead(num, 1) over() num1,
lead(num, 2) over() num2
FROM Logs
)
​
SELECT distinct num as ConsecutiveNums FROM cte WHERE (num=num1) and (num=num2)
```