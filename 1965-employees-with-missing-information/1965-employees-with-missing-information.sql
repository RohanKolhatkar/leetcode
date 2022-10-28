# Write your MySQL query statement below
SELECT employee_id FROM Employees WHERE employee_id NOT IN (SELECT employee_id FROM Salaries)
UNION 
SELECT employee_id FROM Salaries WHERE employee_id NOT IN (SELECT employee_id FROM Employees)

ORDER BY 1 ASC



# order by 1 ascending means order the table accoding to coulm 1 i.e employee id here and asc meand ascending.