# Write your MySQL query statement below
select name, bonus from employee as e left join bonus as b on e.empID = b.empID where bonus < 1000 or bonus is NULL;