# Write your MySQL query statement below
SELECT e1.name FROM EMPLOYEE as e1
INNER JOIN EMPLOYEE AS e2
ON e1.id= e2.managerId
GROUP BY e2.managerId
HAVING COUNT(e2.managerId)>=5;
