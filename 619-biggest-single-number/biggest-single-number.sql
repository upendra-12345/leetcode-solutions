# Write your MySQL query statement below
SELECT MAX(num) as num FROM MYNUMBERS
WHERE num in(select num
    from MYNUMBERS
    GROUP BY num
    having COUNT(*)=1);