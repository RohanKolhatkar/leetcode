# Write your MySQL query statement below

# select v.customer_id, count(1) as count_no_trans
# from visits v where visit_id not in (select visit_id from transactions)
# group by v.customer_id;


# using left join  because it more intutive to think of this logic.


SELECT
	customer_id,
	COUNT(Visits.visit_id) AS count_no_trans
FROM
	visits
LEFT JOIN Transactions
	ON Visits.visit_id = Transactions.visit_id
WHERE 
	Transactions.visit_id IS NULL
GROUP BY customer_id