# Write your MySQL query statement below

Select P.product_name, S.year, S.price from Sales S left join Product P on S.product_id=P.product_id
