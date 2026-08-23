# Write your MySQL query statement below



-- SELECT 
--     user_id,
--     -- Step 1: Calculate the confirmation rate
--     ROUND(
--         SUM(CASE WHEN action = 'confirmed' THEN 1 ELSE 0 END) 
--         / 
--         COUNT(*), 
--         2
--     ) AS confirmation_rate
-- FROM Confirmations
-- GROUP BY user_id;


SELECT 
    s.user_id,
    ROUND(IFNULL(AVG(CASE WHEN c.action = 'confirmed' THEN 1 ELSE 0 END), 0), 2) AS confirmation_rate
FROM 
    Signups s
LEFT JOIN 
    Confirmations c ON s.user_id = c.user_id
GROUP BY 
    s.user_id;
