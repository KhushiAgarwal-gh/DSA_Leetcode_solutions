# Write your MySQL query statement below
select name from Employee where id IN (Select managerId from Employee Group By managerId Having COUNT(*)>=5)