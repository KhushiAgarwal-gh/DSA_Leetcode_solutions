# Write your MySQL query statement below
-- select name from Employee where id IN (Select managerId from Employee Group By managerId Having COUNT(*)>=5)

select e1.name from Employee e1 JOIN(Select managerId,COUNT(*) as directReports
from Employee group by managerId having COUNT(*)>=5 ) e2 on e1.id=e2.managerId;