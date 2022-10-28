# Write your MySQL query statement below


# using if clause and case statements.

# using if
# update salary
# set sex = if(sex='m','f','m');


# using case 
UPDATE salary
SET
    sex =
    CASE sex
        WHEN 'm' THEN 'f'
        ELSE 'm'
    END;



