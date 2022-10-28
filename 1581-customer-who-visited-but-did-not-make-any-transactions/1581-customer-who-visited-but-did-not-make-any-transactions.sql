# Write your MySQL query statement below

select v.customer_id, count(1) as count_no_trans
from visits v where visit_id not in (select visit_id from transactions)
group by v.customer_id;


# using left join  because it more intutive to think of this logic.
