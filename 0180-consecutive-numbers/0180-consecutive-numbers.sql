SELECT 
    distinct a.num as ConsecutiveNums 
FROM
    LOGS a
INNER JOIN Logs b
    on a.id=b.id+1
INNER join Logs C
    on b.id=c.id+1
WHERE a.num=b.num AND a.num=c.num;