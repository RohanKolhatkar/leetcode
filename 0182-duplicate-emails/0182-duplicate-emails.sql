# Write your MySQL query statement below
#  you need to find the duplicates in the table 
#  just think of the group thing and something called count functin

# we have tp return the email --> select email
#  from table person
# we need to group by email 
# return those email which have the count greater than 1.



# write your query here

select email
from person
group by email      
having count(email)>1;

