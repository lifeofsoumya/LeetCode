WITH merged AS(
    SELECT e.*, d.name as Department
    FROM Employee e INNER JOIN Department d ON e.departmentId = d.id
)

SELECT Department, name as Employee, salary as Salary 
FROM (SELECT *, dense_rank() OVER(PARTITION BY departmentId ORDER BY salary DESC) as rank_number FROM merged) t
WHERE t.rank_number <= 3;
