# Write your MySQL query statement below
SELECT s.user_id, round(IFNULL(avg(c.action='confirmed'), 0), 2) as confirmation_rate
FROM (SELECT user_id FROM Signups) s
LEFT JOIN Confirmations c
ON s.user_id = c.user_id
GROUP BY s.user_id;