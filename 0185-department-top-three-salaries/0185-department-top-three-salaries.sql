# Write your MySQL query statement below
select d.name Department,e.name Employee,e.salary Salary
from employee as e,department as d
where d.id=e.departmentId and 
(select count(distinct e2.salary) from employee as e2
where e2.salary>e.salary and e.departmentId=e2.departmentId

)<3;

