# Write your MySQL query statement below
Select e.unique_id, emp.name
from Employees emp
Left join EmployeeUNI e on
emp.id = e.id;



