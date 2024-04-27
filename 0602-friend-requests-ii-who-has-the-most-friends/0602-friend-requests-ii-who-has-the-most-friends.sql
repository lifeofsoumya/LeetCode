WITH CTE AS(
    SELECT requester_id id
    FROM RequestAccepted
    UNION ALL
    SELECT accepter_id id
    FROM RequestAccepted
)

SELECT id, COUNT(*) as num FROM CTE GROUP BY id ORDER BY num DESC LIMIT 1