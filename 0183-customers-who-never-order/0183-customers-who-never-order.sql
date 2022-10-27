# Write your MySQL query statement below
# there  is a very simple way to think of this hw
# ??


# you can do this by using the join command -->left join.

# using left join we can get the people who orders and who dont orders
# then just filter the one who are null

# / so simple isnt it???


# id is primary key in customers and customeris is foreign key
# in orders table.



select name as 'customers'
from customers c
left join orders  o
on c.id = o.customerid
where o.customerid is null;


