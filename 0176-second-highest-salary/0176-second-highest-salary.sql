# Write your MySQL query statement below



# table -->> employee
# two columns name is and salary 
# return -->> second highest salry if exist
# otherwise null

# you are returning the data-->> select statement
select ifnull(
#     when its notnull what to do
    (select distinct salary
    from employee
    order by salary desc
    limit 1 offset 1)
# what to do if doest exist 
    
    ,
    null
)
as secondhighestsalary;
