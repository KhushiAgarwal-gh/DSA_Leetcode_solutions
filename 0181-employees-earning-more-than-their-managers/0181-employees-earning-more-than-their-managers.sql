# Write your MySQL query statement below
SELECT e.name As Employee FROM Employee e , Employee m
where e.managerID=m.id AND e.salary>m.salary;