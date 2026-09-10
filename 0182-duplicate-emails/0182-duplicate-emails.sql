# Write your MySQL query statement below
select email 
from person 
group by email
HAVING COUNT(email)>1;