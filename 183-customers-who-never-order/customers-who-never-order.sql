/* Write your PL/SQL query statement below */
SELECT c.name AS CUSTOMERS
FROM 
Customers c
LEFT JOIN 
Orders o
ON o.customerId = c.id ;
WHERE o.customerId IS NULL