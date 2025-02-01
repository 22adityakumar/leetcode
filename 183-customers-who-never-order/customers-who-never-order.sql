/* Write your PL/SQL query statement below */
SELECT name AS CUSTOMERS
FROM Customers
WHERE id NOT IN (SELECT customerID FROM Orders)