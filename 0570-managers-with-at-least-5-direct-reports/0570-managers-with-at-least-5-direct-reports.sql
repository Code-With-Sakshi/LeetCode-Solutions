# Write your MySQL query statement below
Select name
from employee
where id in (Select managerid from employee
Group by managerid
Having count(id) >= 5
);