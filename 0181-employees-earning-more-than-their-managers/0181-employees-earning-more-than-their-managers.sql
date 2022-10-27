# Write your MySQL query statement below

# employees who earns more than their managers


# return the name table 
# // purest example of using a inner join into a same table.
#  we will use inner join here and will join thinking 
#  as in same table.

select e.name as employee   # employee name we are returning.
from employee as e 
inner join employee as m 
on e.managerid = m.id  # on what basis you are performing the join.
where e.salary > m.salary;

