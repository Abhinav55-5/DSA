# Write your MySQL query statement below
select
(select salary as SecondHighestSalary
from employee as e1
where 2=(
    select count(distinct e2.salary)
    from employee as e2
    where e2.salary>=e1.salary
)
limit  1
)as SecondHighestSalary;

-- select max(salary) as secondhighestsalry
-- from employee 
-- where salary <(select max(salary)
-- from employee )