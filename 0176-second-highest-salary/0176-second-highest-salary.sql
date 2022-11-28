# Write your MySQL query statement below
SELECT MAX(Salary) AS SecondHighestSalary  
FROM Employee
WHERE Salary NOT IN(SELECT MAX(Salary) FROM Employee) #removing the maximum from the MAX(Salary) list, so  only second highest will be present 
ORDER BY Salary DESC #sorting
LIMIT 1; #limiting the value upto one value, it will be the second highest maximum 