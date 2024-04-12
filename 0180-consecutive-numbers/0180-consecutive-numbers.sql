select distinct Num as ConsecutiveNums
from Logs l
where (l.id + 1, Num) in (select * from Logs) and (l.id + 2, Num) in (select * from Logs)

