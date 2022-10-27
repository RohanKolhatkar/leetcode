# Write your MySQL query statement below

#  it is always a best and good practice to have the count of ony
# the distinct one it saves computation time.
# select class
# from courses
# group by class
# having count(student) >=5;


select class
from courses
group by class
having count(distinct student) >=5;