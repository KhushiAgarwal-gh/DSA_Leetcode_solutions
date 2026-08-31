# Write your MySQL query statement below
Select max(salary)  AS SecondHighestSalary from Employee Where salary<(Select Max(salary) from Employee);
