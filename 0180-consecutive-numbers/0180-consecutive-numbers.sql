SELECT DISTINCT num as ConsecutiveNums
FROM Logs l
WHERE (l.id + 1, num) IN (SELECT * FROM Logs) AND (l.id + 2, num) IN (SELECT * FROM Logs)

