# Write your MySQL query statement below
SELECT product_name , year , price FROM SALES
LEFT JOIN PRODUCT
ON sales.product_id = product.product_id;