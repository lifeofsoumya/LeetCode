# Write your MySQL query statement below
SELECT euni.unique_id as unique_id, e.name as name FROM Employees e LEFT JOIN EmployeeUNI as euni ON e.id = euni.id