# Write your MySQL query statement below


#  return the customer name
# if you get statement like this think og 
# group by and count.

select customer_number 
from (select customer_number,count(*) as cnt
     from orders
     group by customer_number
)as e 

order by e.cnt desc
limit 1;