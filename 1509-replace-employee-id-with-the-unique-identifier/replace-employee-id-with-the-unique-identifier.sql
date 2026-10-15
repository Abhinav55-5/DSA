# Write your MySQL query statement below
SELECT e.unique_id, ey.name
FROM Employees AS ey
LEFT JOIN EmployeeUNI AS e
ON e.id = ey.id;