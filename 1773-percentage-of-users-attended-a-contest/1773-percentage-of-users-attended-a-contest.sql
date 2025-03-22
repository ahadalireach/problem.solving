WITH TotalUsers AS (
    SELECT COUNT(*) AS total_users FROM Users
),
Registrations AS (
    SELECT 
        r.contest_id,
        COUNT(r.user_id) AS registered_users,
        (COUNT(r.user_id) / (SELECT total_users FROM TotalUsers)) * 100 AS percentage
    FROM Register r
    GROUP BY r.contest_id
)
SELECT 
    contest_id, 
    ROUND(percentage, 2) AS percentage
FROM Registrations
ORDER BY percentage DESC, contest_id ASC;