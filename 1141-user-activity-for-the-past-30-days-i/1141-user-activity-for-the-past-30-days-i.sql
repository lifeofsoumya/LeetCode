SELECT activity_date AS day, COUNT(DISTINCT user_id) AS active_users
FROM Activity 
WHERE datediff('2019-07-27', activity_date) BETWEEN 0 AND 29 # 0 to 29 day difference, to avoid negative diff
GROUP BY activity_date 