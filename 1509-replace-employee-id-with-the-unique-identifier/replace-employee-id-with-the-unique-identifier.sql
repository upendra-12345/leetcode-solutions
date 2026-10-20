# Write your MySQL query statement below
SELECT unique_id , name FROM EMPLOYEES emp
LEFT JOIN EMPLOYEEUNI empu
ON  emp.id = empu.id;