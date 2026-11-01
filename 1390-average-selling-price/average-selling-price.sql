# Write your MySQL query statement below
SELECT p.product_id, IFNULL(ROUND(SUM(units*price)/SUM(units),2),0) as average_price
FROM PRICES p
LEFT JOIN
UNITSSOLD u
ON p.product_id= u.product_id
AND u.purchase_date BETWEEN start_date AND end_date
GROUP BY product_id;