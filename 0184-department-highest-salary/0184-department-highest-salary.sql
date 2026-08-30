# Write your MySQL query statement below
select d.name Department,e.name Employee,e.salary Salary
from employee as e
join department as d
on d.id=e.departmentId
where e.salary= (
    select max(e2.salary) from 
    Employee as e2
    where e.departmentId=e2.departmentId

)