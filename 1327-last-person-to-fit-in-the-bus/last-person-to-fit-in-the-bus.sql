# Write your MySQL query statement below
WITH cte AS
(
    SELECT Queue.*,
    SUM(weight) OVER(ORDER BY turn) AS Total_weight
    FROM Queue
)
SELECT person_name FROM cte WHERE Total_weight <=1000 ORDER BY Total_weight DESC
Limit 1;