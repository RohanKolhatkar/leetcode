# Write your MySQL query statement below

# // understand the whole three things.
# select FirstName, LastName, City, State
# from Person as p left join Address as a on p.PersonId = a.PersonId;

# // this is also true.

# select p.FirstName, p.LastName, a.City, a.State
# from Person as p left join Address as a on p.PersonId = a.PersonId;


# // this is also true
select p.FirstName, p.LastName, a.City, a.State
from Person p left join Address a on p.PersonId = a.PersonId;