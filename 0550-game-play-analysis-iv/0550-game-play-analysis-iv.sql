# Write your MySQL query statement below

SELECT ROUND(COUNT(DISTINCT player_id) / (SELECT COUNT(DISTINCT player_id) FROM ACTIVITY), 2) AS fraction
FROM Activity
WHERE (player_id, DATE_SUB(event_date, INTERVAL 1 DAY)) # from each day sub 1, & check if it matches min date 
IN (
    SELECT player_id, MIN(event_date) FROM Activity  GROUP BY player_id
)